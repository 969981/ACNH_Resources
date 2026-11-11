
undefined4 FUN_004ae4c0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  int iVar5;
  ulong *puVar6;
  size_t __n;
  undefined1 auStack_200 [128];
  undefined1 auStack_140 [256];
  
  puVar6 = (ulong *)*param_1;
  uVar1 = (long)*puVar6 + 1;
  if (puVar6[1] < uVar1) {
    lVar3 = FUN_004462a0(puVar6,&DAT_040c2970,1);
    if (lVar3 == 1) goto LAB_004ae53c;
LAB_004ae594:
    uVar2 = 0x80040200;
  }
  else {
    memcpy((void *)*puVar6,&DAT_040c2970,1);
    *puVar6 = uVar1;
LAB_004ae53c:
    iVar5 = *(int *)(param_1 + 1) << 1;
    if (0x7f < *(int *)(param_1 + 1)) {
      iVar5 = 0x100;
    }
    FUN_0043a4d0(auStack_140,0x20,iVar5);
    if (iVar5 != 0) {
      puVar6 = (ulong *)*param_1;
      __n = (size_t)iVar5;
      uVar1 = (long)*puVar6 + __n;
      if (puVar6[1] < uVar1) {
        sVar4 = FUN_004462a0(puVar6,auStack_140,__n);
        if (sVar4 != __n) goto LAB_004ae594;
      }
      else {
        memcpy((void *)*puVar6,auStack_140,__n);
        *puVar6 = uVar1;
      }
    }
    uVar2 = FUN_004af9c0(param_1,param_2,auStack_200 + 0x80);
  }
  return uVar2;
}

