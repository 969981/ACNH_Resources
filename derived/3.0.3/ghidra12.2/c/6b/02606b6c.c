
undefined8 FUN_02606b6c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb43c0;
  if ((((*(char *)(param_1 + 0x89) == '\0') ||
       (*(int *)(param_3 + 8) < *(int *)(DAT_050d57c8 + 0x28) ||
        *(int *)(DAT_050d57c8 + 0x38) < *(int *)(param_3 + 8))) ||
      (*(int *)(param_3 + 0xc) < *(int *)(DAT_050d57c8 + 0x2c))) ||
     (*(int *)(DAT_050d57c8 + 0x3c) < *(int *)(param_3 + 0xc))) {
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_2);
    if (*(long *)puVar3 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
         (bVar4 = FUN_0277e024(param_2), *(byte *)(param_1 + 0x88) == (bVar4 & 1))) {
        FUN_0260a240(param_1,param_2);
      }
    }
    uVar6 = *(uint *)(param_1 + 0x8c);
    if (uVar6 == 0) {
      lVar7 = *(long *)(DAT_0519d040 + 0x1f8);
    }
    else {
      plVar1 = (long *)(DAT_0519d040 + 0x30) + uVar6;
      if (0x38 < uVar6) {
        plVar1 = (long *)(DAT_0519d040 + 0x30);
      }
      lVar7 = *plVar1;
    }
    if (lVar7 != 0) {
      lVar2 = lVar7 + 200 + (ulong)*(uint *)(param_1 + 0x90) * 0x10;
      if (7 < *(uint *)(param_1 + 0x90)) {
        lVar2 = lVar7 + 200;
      }
      if ((*(long *)(lVar2 + 8) != 0) &&
         (sVar5 = FUN_012e63a8(*(long *)(lVar2 + 8),param_3), DAT_05585410 != sVar5)) {
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      }
    }
  }
  return 1;
}

