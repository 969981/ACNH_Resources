
void FUN_0065a6b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  void *__src;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  void *__dest;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  size_t local_38;
  
  uVar3 = *param_2;
  uVar12 = param_2[2];
  uVar4 = *(undefined4 *)(param_2 + 3);
  param_1[1] = param_2[1];
  param_1[2] = uVar12;
  puVar7 = param_1 + 6;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *param_1 = uVar3;
  param_1[4] = puVar7;
  param_1[5] = 0x8000001000000000;
  if (param_1 != param_2) {
    uVar5 = *(uint *)(param_2 + 5);
    puVar17 = (undefined8 *)param_2[4];
    if ((int)uVar5 < 0x11) {
      uVar9 = 0;
      uVar2 = 0;
      if ((int)uVar5 < 1) {
        uVar2 = uVar5;
      }
    }
    else {
      puVar7 = (undefined8 *)FUN_004267f0(PTR_DAT_048607b8,uVar5,0x10,puVar7,0,(long)param_1 + 0x2c)
      ;
      uVar9 = *(uint *)(param_1 + 5);
      param_1[4] = puVar7;
      uVar2 = uVar9;
      if ((int)uVar5 <= (int)uVar9) {
        uVar2 = uVar5;
      }
    }
    if ((puVar7 != puVar17) && (0 < (int)uVar2)) {
      uVar16 = (ulong)uVar2;
      if (uVar16 - 1 < 3) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        puVar11 = puVar17 + 4;
        puVar14 = puVar7 + 4;
        do {
          uVar3 = puVar11[-3];
          lVar15 = lVar15 + 4;
          puVar14[-4] = puVar11[-4];
          puVar14[-3] = uVar3;
          uVar3 = puVar11[-1];
          puVar14[-2] = puVar11[-2];
          puVar14[-1] = uVar3;
          uVar3 = puVar11[1];
          *puVar14 = *puVar11;
          puVar14[1] = uVar3;
          puVar1 = puVar11 + 2;
          uVar3 = puVar11[3];
          puVar11 = puVar11 + 8;
          puVar14[2] = *puVar1;
          puVar14[3] = uVar3;
          puVar14 = puVar14 + 8;
        } while (uVar16 - (uVar16 & 3) != lVar15);
      }
      if ((uVar2 & 3) != 0) {
        lVar13 = -(uVar16 & 3);
        puVar7 = puVar7 + lVar15 * 2;
        puVar11 = puVar17 + lVar15 * 2;
        do {
          uVar3 = puVar11[1];
          *puVar7 = *puVar11;
          puVar7[1] = uVar3;
          lVar13 = lVar13 + 1;
          puVar7 = puVar7 + 2;
          puVar11 = puVar11 + 2;
        } while (lVar13 != 0);
      }
      puVar7 = (undefined8 *)param_1[4];
    }
    if ((int)uVar9 < (int)uVar5) {
      puVar17 = puVar17 + (long)(int)uVar2 * 2;
      puVar7 = puVar7 + (long)(int)uVar2 * 2;
      uVar2 = uVar5 + ~uVar9 + 1 & 3;
      if (2 < uVar5 + ~uVar9) {
        iVar10 = (uVar9 + uVar2) - uVar5;
        puVar11 = puVar17;
        puVar14 = puVar7;
        do {
          uVar3 = puVar11[1];
          puVar17 = puVar11 + 8;
          *puVar14 = *puVar11;
          puVar14[1] = uVar3;
          puVar7 = puVar14 + 8;
          uVar3 = puVar11[3];
          iVar10 = iVar10 + 4;
          puVar14[2] = puVar11[2];
          puVar14[3] = uVar3;
          uVar3 = puVar11[5];
          puVar14[4] = puVar11[4];
          puVar14[5] = uVar3;
          uVar3 = puVar11[7];
          puVar14[6] = puVar11[6];
          puVar14[7] = uVar3;
          puVar11 = puVar17;
          puVar14 = puVar7;
        } while (iVar10 != 0);
      }
      if (uVar2 != 0) {
        iVar10 = -uVar2;
        do {
          uVar3 = puVar17[1];
          *puVar7 = *puVar17;
          puVar7[1] = uVar3;
          iVar10 = iVar10 + 1;
          puVar17 = puVar17 + 2;
          puVar7 = puVar7 + 2;
        } while (iVar10 != 0);
      }
    }
    *(uint *)(param_1 + 5) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  puVar6 = PTR_DAT_048607b8;
  __src = (void *)param_2[0x26];
  sVar8 = param_2[0x27];
  if (__src != (void *)0x0) {
    local_38 = sVar8;
    if (sVar8 == 0) {
      sVar8 = 0;
      __dest = (void *)0x0;
    }
    else {
      (**(code **)(*(long *)PTR_DAT_048607b8 + 0x18))(PTR_DAT_048607b8,0,0);
      __dest = (void *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,sVar8,&local_38);
      param_1[0x26] = __dest;
      param_1[0x28] = local_38;
      sVar8 = local_38;
    }
    memcpy(__dest,__src,sVar8);
    param_1[0x27] = local_38;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}

