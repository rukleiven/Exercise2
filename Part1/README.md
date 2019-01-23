# Mutex and Channel basics

### What is an atomic operation?
> En atomisk operasjon i concurrent programmering er en operasjon som kjører fullt uavhengig av noen annen prosess. Dette blir mye brukt i moderne operativsystemer og i parallelle prosesssystemer.

> Kilde: https://www.techopedia.com/definition/3466/atomic-operation

### What is a semaphore?
> En Semaphore er en spesiel variabel som kontrollerer tilgangen til en felles resurs. Kan tenkes på som en dørvakt på et utested - hvis det er full kapasitet blir du stoppet og må vente til noen andre drar.

Vi skiller mellom counting semaphores og binary semaphores, hvor sistnevnte er begrenset til verdien 0 eller 1.

> Kilder: https://en.wikipedia.org/wiki/Semaphore_(programming) og https://barrgroup.com/Embedded-Systems/How-To/RTOS-Mutex-Semaphore


### What is a mutex?
> En Mutex (Mutual Exclution) er lik binær semaphore, men har i tillegg egenskapen ownership, som vil si at kun den som opptar resursen kan gjøre den tilgjengelig igjen.

> Kilde: fra forelesningsnotater


### What is the difference between a mutex and a binary semaphore?
> se svar ovenfor. 

### What is a critical section?
> En kritisk seksjon en beskyttet seksjon i et dataprogram som bare kan utføres av en enkelt prosess av gangen. Problemet er aktuelt innenfor parallelle beregninger hvor en delt ressurs kan føre til uventet eller feilaktig adferd, hvis den ikke blir beskyttet

> Kilde: https://en.wikipedia.org/wiki/Critical_section

### What is the difference between race conditions and data races?
 > Race condition er en feil som oppstår som følge av at timing eller rekkefølge av prosesser påvirker resultatet av programmet.
 
 > Data race er en feil som oppstår som følge av at en minnelokasjon blir gjort tilgjengelig for to tråder som kjører cocurrent (som ikke er read only)
 
 > Kilde: https://blog.regehr.org/archives/490

### List some advantages of using message passing over lock-based synchronization primitives.
> Usikkert svar: Raskere kommunikasjon


### List some advantages of using lock-based synchronization primitives over message passing.
> Usikkert svar: Unngår tap av data
