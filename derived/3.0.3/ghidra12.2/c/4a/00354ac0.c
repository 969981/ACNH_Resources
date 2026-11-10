
void FUN_00354ac0(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long *plVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  _func_void_void_ptr_void_ptr *p_Var9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 local_a0 [8];
  
  pcVar1 = (char *)(param_1 + 0x1bd1);
  uVar7 = nn::fontll::ScalableFontEngine::GetPointerToWorkBuffer();
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  if ((*pcVar1 == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
    uVar15 = 0;
    do {
      uVar8 = nn::fontll::ScalableFontEngine::GetPointerToWorkBuffer();
      cVar4 = *pcVar1;
      local_a0[uVar15] = uVar8;
      if (cVar4 == '\0') break;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x1bd4));
  }
  uVar15 = (ulong)*(uint *)(param_1 + 0x1884);
  if (*(uint *)(param_1 + 0x1884) != 0) {
    uVar16 = 0;
    uVar17 = 0;
    do {
      pbVar2 = (byte *)(param_1 + uVar16 + 0x1888);
      bVar5 = *pbVar2;
      uVar10 = (uint)bVar5;
      if (bVar5 != 0) {
        lVar14 = 0;
        uVar15 = -(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
        do {
          p_Var9 = *(_func_void_void_ptr_void_ptr **)
                    (*(long *)(param_1 + 0x1c40) + uVar15 + lVar14 * 8);
          if (p_Var9 != (_func_void_void_ptr_void_ptr *)0x0) {
            nn::fontll::ScalableFontEngine::FinalizeOtfKerningTable
                      (*(OtfKerningTable **)(param_1 + 8),p_Var9,param_3);
            *(undefined8 *)(*(long *)(param_1 + 0x1c40) + uVar15 + lVar14 * 8) = 0;
            uVar10 = (uint)*pbVar2;
          }
          lVar14 = lVar14 + 1;
        } while ((uint)lVar14 < uVar10);
        uVar15 = (ulong)*(uint *)(param_1 + 0x1884);
        uVar17 = (ulong)((int)uVar17 + (uint)lVar14);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar15);
  }
  nn::fontll::ScalableFontEngine::Finalize();
  nn::fontll::ScalableFontEngine::GetError();
  if ((*pcVar1 == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
    uVar15 = 1;
    do {
      nn::fontll::ScalableFontEngine::Finalize();
      nn::fontll::ScalableFontEngine::GetError();
      if (*pcVar1 == '\0') break;
      bVar6 = uVar15 < *(uint *)(param_1 + 0x1bd4);
      uVar15 = uVar15 + 1;
    } while (bVar6);
  }
  (*param_3)(*(undefined8 *)(param_1 + 8),param_4);
  *(undefined8 *)(param_1 + 8) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x10),param_4);
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*param_3)(uVar7,param_4);
  if ((*pcVar1 == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
    uVar15 = 0;
    do {
      (*param_3)(local_a0[uVar15],param_4);
      if (*pcVar1 == '\0') break;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x1bd4));
  }
  lVar14 = 0;
  plVar11 = (long *)(param_1 + 0x80);
  plVar12 = *(long **)(param_1 + 0x88);
  if (plVar12 != plVar11) goto LAB_00354cf0;
  while (lVar14 = lVar14 + 1, lVar14 != 0x100) {
    lVar13 = param_1 + lVar14 * 0x18;
    plVar11 = (long *)(lVar13 + 0x80);
    plVar12 = *(long **)(lVar13 + 0x88);
    if (plVar12 != plVar11) {
LAB_00354cf0:
      do {
        plVar3 = (long *)plVar12[1];
        lVar13 = *plVar3;
        *(long **)(*plVar12 + 8) = plVar3;
        *plVar3 = *plVar12;
        *(long **)(lVar13 + 8) = plVar12;
        *plVar12 = lVar13;
        plVar12 = (long *)plVar11[1];
      } while (plVar12 != plVar11);
    }
  }
  plVar11 = *(long **)(param_1 + 0x58);
  while (plVar11 != (long *)(param_1 + 0x50)) {
    plVar12 = (long *)plVar11[1];
    lVar14 = *plVar12;
    *(long **)(*plVar11 + 8) = plVar12;
    *plVar12 = *plVar11;
    *(long **)(lVar14 + 8) = plVar11;
    *plVar11 = lVar14;
    plVar11 = *(long **)(param_1 + 0x58);
  }
  plVar11 = *(long **)(param_1 + 0x68);
  while (plVar11 != (long *)(param_1 + 0x60)) {
    plVar12 = (long *)plVar11[1];
    lVar14 = *plVar12;
    *(long **)(*plVar11 + 8) = plVar12;
    *plVar12 = *plVar11;
    *(long **)(lVar14 + 8) = plVar11;
    *plVar11 = lVar14;
    plVar11 = *(long **)(param_1 + 0x68);
  }
  plVar11 = *(long **)(param_1 + 0x78);
  while (plVar11 != (long *)(param_1 + 0x70)) {
    plVar12 = (long *)plVar11[1];
    lVar14 = *plVar12;
    *(long **)(*plVar11 + 8) = plVar12;
    *plVar12 = *plVar11;
    *(long **)(lVar14 + 8) = plVar11;
    *plVar11 = lVar14;
    plVar11 = *(long **)(param_1 + 0x78);
  }
  FUN_00351518(param_1 + 0x30,param_3,param_4);
  (*param_3)(*(undefined8 *)(param_1 + 0x18),param_4);
  *(undefined8 *)(param_1 + 0x18) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1bf0),param_4);
  *(undefined8 *)(param_1 + 0x1bf0) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1bf8),param_4);
  *(undefined8 *)(param_1 + 0x1bf8) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c00),param_4);
  *(undefined8 *)(param_1 + 0x1c00) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c08),param_4);
  *(undefined8 *)(param_1 + 0x1c08) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c10),param_4);
  *(undefined8 *)(param_1 + 0x1c10) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c18),param_4);
  *(undefined8 *)(param_1 + 0x1c18) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c20),param_4);
  *(undefined8 *)(param_1 + 0x1c20) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c28),param_4);
  *(undefined8 *)(param_1 + 0x1c28) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c30),param_4);
  *(undefined8 *)(param_1 + 0x1c30) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c38),param_4);
  *(undefined8 *)(param_1 + 0x1c38) = 0;
  (*param_3)(*(undefined8 *)(param_1 + 0x1c40),param_4);
  *(undefined8 *)(param_1 + 0x1c40) = 0;
  if (*(char *)(param_1 + 0x1eb8) != '\0') {
    FUN_0034f968(param_1 + 0x1d28,param_2);
    FUN_0034f7c4(param_1 + 0x1c50,param_2);
    if (*(long *)(param_1 + 0x1e90) == param_1 + 0x1d70) {
      FUN_0034915c(*(long *)(param_1 + 0x1e90),param_2);
      if (*(long *)(param_1 + 0x1e90) != param_1 + 0x1d70) {
        return;
      }
      goto LAB_00354efc;
    }
  }
  if (*(long *)(param_1 + 0x1e90) != param_1 + 0x1d70) {
    return;
  }
LAB_00354efc:
  (*param_3)(*(undefined8 *)(param_1 + 0x20),param_4);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

