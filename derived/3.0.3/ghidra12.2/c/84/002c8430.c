
bool FUN_002c8430(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 auStack_250 [16];
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  undefined8 local_d0;
  undefined4 local_c8;
  ulong local_48;
  
  puVar4 = auStack_250;
  lVar1 = param_1 + 0x50;
  uVar3 = FUN_002b440c(lVar1);
  if ((((uVar3 & 1) == 0) ||
      (((*(int *)(param_1 + 0x150) != 1 && (*(char *)(param_1 + 0x17c9) == '\0')) &&
       (*(char *)(param_1 + 0x17ca) == '\0')))) && (*(int *)(param_1 + 0x1e8) != 0)) {
    for (lVar5 = *(long *)(param_1 + 0x1e0); lVar5 != param_1 + 0x1d8; lVar5 = *(long *)(lVar5 + 8))
    {
      local_48 = 0;
      FUN_002282f0(&local_48);
      puVar2 = (undefined8 *)(lVar5 + 0x10);
      if (((*(ulong *)(lVar5 + 0xa0) == 0) || (*(ulong *)(lVar5 + 0xa0) <= local_48)) ||
         (*(char *)(lVar5 + 0x99) != '\0')) {
        if (*(char *)(lVar5 + 0x98) == '\0') {
          uVar3 = FUN_002b44d4(lVar5 + 0x18);
        }
        else {
          uVar3 = FUN_002b4470(lVar5 + 0x18,lVar1);
        }
        if ((uVar3 & 1) == 0) {
          FUN_002b4018(auStack_250,lVar1);
          FUN_002c8cd4(param_1,auStack_250,puVar2);
          FUN_002b4104(auStack_250);
          if (((*(char *)(lVar5 + 0x99) == '\0') &&
              (uVar3 = FUN_002b440c(lVar5 + 0x18), (uVar3 & 1) != 0)) &&
             (uVar3 = FUN_002b440c(lVar1), (uVar3 & 1) == 0)) {
            FUN_002c8fe0(param_1,puVar2);
          }
        }
        else {
          if (*(char *)(lVar5 + 0x99) == '\0') {
            FUN_002b4018(&local_d0,lVar1);
            FUN_002b455c(&local_d0,1);
            FUN_002b4018(auStack_150,&local_d0);
            FUN_002c8cd4(param_1,auStack_150,puVar2);
            FUN_002b4104(auStack_150);
            if (((*(char *)(lVar5 + 0x98) != '\0') &&
                (uVar3 = FUN_002b440c(lVar1), (uVar3 & 1) == 0)) &&
               (uVar3 = FUN_002b440c(lVar5 + 0x18), (uVar3 & 1) == 0)) {
              FUN_002b4018(auStack_1d0,lVar1);
              FUN_002c8cd4(param_1,auStack_1d0,puVar2);
              FUN_002b4104(auStack_1d0);
            }
            puVar4 = &local_d0;
          }
          else {
            FUN_002b4018(auStack_250,lVar1);
            FUN_002c8cd4(param_1,auStack_250,puVar2);
          }
          FUN_002b4104(puVar4);
        }
        (**(code **)*puVar2)(puVar2);
        FUN_00223704(param_1 + 0x1d8,lVar5);
        FUN_002236e0(param_1 + 0x1f0,param_1 + 0x1f0,lVar5 + *(int *)(param_1 + 0x204));
        if (*(int *)(param_1 + 0x1e8) == 0) {
          return false;
        }
        if (*(char *)(param_1 + 0x17c9) == '\0') {
          return *(char *)(param_1 + 0x17ca) == '\0';
        }
        return false;
      }
      local_c8 = 0;
      local_d0 = 0x40000;
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(puVar2,&local_d0);
    }
  }
  return false;
}

