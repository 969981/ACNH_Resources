
undefined8 * FUN_0065a9b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *__src;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  void *__dest;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong local_38;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar11 = param_2[2];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar11;
    puVar6 = PTR_DAT_048607b8;
    __src = (void *)param_2[0x26];
    uVar16 = param_2[0x27];
    __dest = (void *)param_1[0x26];
    local_38 = uVar16;
    if (__dest != __src) {
      if ((ulong)param_1[0x28] < uVar16) {
        if (*(char *)(param_1 + 0x29) == '\0') {
          (**(code **)(*(long *)PTR_DAT_048607b8 + 0x18))(PTR_DAT_048607b8);
        }
        __dest = (void *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,uVar16,&local_38);
        param_1[0x26] = __dest;
        param_1[0x28] = local_38;
      }
      memcpy(__dest,__src,local_38);
      param_1[0x27] = local_38;
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    lVar17 = param_2[4];
    uVar4 = *(uint *)(param_2 + 5);
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < (int)uVar4) {
      lVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar4,0x10,param_1[4],*(undefined4 *)(param_1 + 5));
      param_1[4] = lVar7;
    }
    else {
      lVar7 = param_1[4];
    }
    uVar5 = *(uint *)(param_1 + 5);
    uVar1 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar1 = uVar4;
    }
    if ((lVar7 != lVar17) && (0 < (int)uVar1)) {
      uVar16 = (ulong)uVar1;
      if (uVar16 - 1 < 3) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        puVar10 = (undefined8 *)(lVar17 + 0x20);
        puVar14 = (undefined8 *)(lVar7 + 0x20);
        do {
          uVar2 = puVar10[-3];
          lVar15 = lVar15 + 4;
          puVar14[-4] = puVar10[-4];
          puVar14[-3] = uVar2;
          uVar2 = puVar10[-1];
          puVar14[-2] = puVar10[-2];
          puVar14[-1] = uVar2;
          uVar2 = puVar10[1];
          *puVar14 = *puVar10;
          puVar14[1] = uVar2;
          puVar9 = puVar10 + 2;
          uVar2 = puVar10[3];
          puVar10 = puVar10 + 8;
          puVar14[2] = *puVar9;
          puVar14[3] = uVar2;
          puVar14 = puVar14 + 8;
        } while (uVar16 - (uVar16 & 3) != lVar15);
      }
      if ((uVar1 & 3) != 0) {
        lVar12 = -(uVar16 & 3);
        puVar10 = (undefined8 *)(lVar7 + lVar15 * 0x10);
        puVar14 = (undefined8 *)(lVar17 + lVar15 * 0x10);
        do {
          uVar2 = puVar14[1];
          *puVar10 = *puVar14;
          puVar10[1] = uVar2;
          lVar12 = lVar12 + 1;
          puVar10 = puVar10 + 2;
          puVar14 = puVar14 + 2;
        } while (lVar12 != 0);
      }
      lVar7 = param_1[4];
    }
    if ((int)uVar5 < (int)uVar4) {
      puVar10 = (undefined8 *)(lVar17 + (long)(int)uVar1 * 0x10);
      puVar14 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 0x10);
      uVar1 = uVar4 + ~uVar5 + 1 & 3;
      if (2 < uVar4 + ~uVar5) {
        iVar8 = (uVar5 + uVar1) - uVar4;
        puVar9 = puVar10;
        puVar13 = puVar14;
        do {
          uVar2 = puVar9[1];
          puVar10 = puVar9 + 8;
          *puVar13 = *puVar9;
          puVar13[1] = uVar2;
          puVar14 = puVar13 + 8;
          uVar2 = puVar9[3];
          iVar8 = iVar8 + 4;
          puVar13[2] = puVar9[2];
          puVar13[3] = uVar2;
          uVar2 = puVar9[5];
          puVar13[4] = puVar9[4];
          puVar13[5] = uVar2;
          uVar2 = puVar9[7];
          puVar13[6] = puVar9[6];
          puVar13[7] = uVar2;
          puVar9 = puVar10;
          puVar13 = puVar14;
        } while (iVar8 != 0);
      }
      if (uVar1 != 0) {
        iVar8 = -uVar1;
        do {
          uVar2 = puVar10[1];
          *puVar14 = *puVar10;
          puVar14[1] = uVar2;
          iVar8 = iVar8 + 1;
          puVar10 = puVar10 + 2;
          puVar14 = puVar14 + 2;
        } while (iVar8 != 0);
      }
    }
    *(uint *)(param_1 + 5) = uVar4;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return param_1;
}

