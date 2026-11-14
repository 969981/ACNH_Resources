
undefined8 FUN_017029bc(long param_1,undefined8 param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint *puVar7;
  undefined **local_50;
  char *pcStack_48;
  
  if (param_4 != 0) {
    FUN_01707310(param_1,param_2,param_3,param_4,param_5 & 1);
    goto LAB_01702b40;
  }
  puVar2 = (uint *)FUN_0171ee68(param_2);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *puVar2;
    uVar4 = 0;
    if ((uVar1 != 0) && (puVar2 != (uint *)(ulong)uVar1)) {
      puVar7 = (uint *)((long)puVar2 - (long)(ulong)uVar1);
      uVar4 = 0;
      if (*puVar7 != 0) {
        uVar1 = puVar7[1];
        if ((uVar1 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar7 + lVar6 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar6 != 0) {
            uVar4 = 0;
            if ((ulong)uVar1 != 0) {
              uVar4 = (uint)((ulong)((long)puVar2 - lVar6) / (ulong)uVar1);
            }
            if (*puVar7 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < DAT_05248f30) &&
               (uVar4 = (uint)*(ushort *)(DAT_05248f38 + (long)(int)uVar4 * 2), uVar4 < 7))
            goto LAB_01702aa0;
          }
        }
        uVar4 = 0;
      }
    }
LAB_01702aa0:
    if (uVar4 - 1 < 6) {
      uVar5 = *(undefined4 *)(&DAT_04176c6c + (long)(int)(uVar4 - 1) * 4);
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x5ee0) = uVar5;
    local_50 = &PTR_LAB_048f9770;
    pcStack_48 = "FastLowerBodyWaitAnimType";
    if (((*(long *)(param_1 + 0x1138) != 0) &&
        (lVar6 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar6 != 0)) &&
       (plVar3 = *(long **)(lVar6 + 0x48), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_50,*(undefined4 *)(param_1 + 0x5ee0));
    }
  }
  FUN_01707310(param_1,param_2,param_3,0,param_5 & 1);
  FUN_01707f58(param_1,param_3,1,0);
LAB_01702b40:
  FUN_01707750(param_1,param_2);
  return 1;
}

