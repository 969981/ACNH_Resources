
bool FUN_001f25ec(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_001429c4();
  if (lVar1 != 0) {
    if (param_2 != (long *)0x0) {
      *(int *)(param_1 + 10) = (int)*param_2;
      FUN_00189504(param_1 + 0xb,param_2 + 1);
      FUN_00189504(param_1 + 0x10,param_2 + 6);
      FUN_00189504(param_1 + 0x15,param_2 + 0xb);
      FUN_00189504(param_1 + 0x1a,param_2 + 0x10);
      FUN_00189504(param_1 + 0x1f,param_2 + 0x15);
      if (param_1 + 10 != param_2) {
        FUN_001a2ac0(param_1 + 0x24,param_2[0x1a],param_2[0x1b],param_2[0x1b] - param_2[0x1a]);
      }
      *(int *)(param_1 + 0x27) = (int)param_2[0x1d];
      if (((char)*param_2 == '\0') || (*(char *)((long)param_2 + 1) == '\0')) {
        FUN_00174e0c(lVar1,0x1fb,1);
      }
      FUN_00174e0c(lVar1,0x40,(char)*param_2);
      FUN_00174e0c(lVar1,0x51,(ulong)*(byte *)((long)param_2 + 1) << 1);
      FUN_00174e0c(lVar1,0x29,*(char *)((long)param_2 + 2));
      FUN_00174e0c(lVar1,0xac,*(char *)((long)param_2 + 3));
      lVar2 = FUN_0018b798(param_2 + 1);
      if (lVar2 != 0) {
        FUN_00174e0c(lVar1,0x2729,param_2[4]);
      }
      lVar2 = FUN_0018b798(param_2 + 6);
      if (lVar2 != 0) {
        FUN_00174e0c(lVar1,0x2767,param_2[9]);
      }
      lVar2 = FUN_0018b798(param_2 + 0xb);
      if (lVar2 != 0) {
        FUN_00174e0c(lVar1,0x272a,param_2[0xe]);
      }
      lVar2 = FUN_0018b798(param_2 + 0x10);
      if (lVar2 != 0) {
        FUN_00174e0c(lVar1,0x2751,param_2[0x13]);
      }
      lVar2 = FUN_0018b798(param_2 + 0x15);
      if (lVar2 != 0) {
        FUN_00174e0c(lVar1,0x2771,param_2[0x18]);
      }
      FUN_00174e0c(lVar1,0x4e8c,PTR_LAB_04bcc8b8);
      FUN_00174e0c(lVar1,0x277d,param_1);
    }
    FUN_00174e0c(lVar1,0x47,1);
    FUN_00174e0c(lVar1,0x8d,1);
    FUN_00174e0c(lVar1,0x3d,1);
    FUN_00174e0c(lVar1,99,1);
    FUN_00174e0c(lVar1,0x54,2);
    FUN_00174e0c(lVar1,0x27a5,param_1);
    FUN_00174e0c(lVar1,0x4eb4,PTR_LAB_04bcc8c0);
    if (*param_1 != 0) {
      FUN_00142be4();
    }
    *param_1 = lVar1;
  }
  return lVar1 != 0;
}

