
undefined4 FUN_03bd443c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar5 = FUN_03be8d94(param_1,param_2,"getRotateSourceType");
  if ((uVar5 & 1) == 0) {
LAB_03bd44b8:
    uVar4 = 0;
  }
  else {
    puVar9 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
    puVar1 = puVar9 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
      puVar1 = puVar9;
    }
    uVar8 = (uint)*puVar1;
    if ((uVar8 >> 10 & 1) == 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 8);
      if (*(uint *)(lVar6 + 0x534) < 0xb) goto LAB_03bd44b8;
      puVar7 = (undefined4 *)(*(long *)(lVar6 + 0x548) + 0x80);
    }
    else {
      uVar8 = (uVar8 & 0x7ff) - (uVar8 >> 1 & 0x155);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar2 = puVar9 + uVar3;
      if (1 < uVar3) {
        puVar2 = puVar9;
      }
      puVar7 = (undefined4 *)
               (*(long *)(*(long *)*puVar2 + 0x48) +
               ((ulong)*(uint *)((long)puVar1 +
                                (long)(int)((uVar8 + (uVar8 >> 0x10) & 0x3f) - 1) * 4 + 8) &
               0xffffff) * 4);
    }
    uVar4 = *puVar7;
  }
  return uVar4;
}

