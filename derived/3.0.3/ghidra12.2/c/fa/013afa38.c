
void FUN_013afa38(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  
  *(undefined4 *)(param_4 + 0x35c) = 0x3fc00000;
  if (*(long *)(*(long *)(*(long *)(param_4 + 0x48) + 0x60) + 0x1138) != 0) {
    FUN_03850760(0x3fc00000);
  }
  *(undefined4 *)(param_4 + 0x3b0) = 0;
  uVar13 = FUN_013b9620(param_4);
  *(undefined4 *)(param_4 + 0x3d8) = uVar13;
  *(undefined4 *)(param_4 + 0x3dc) = param_2;
  *(undefined4 *)(param_4 + 0x3e0) = param_3;
  *(undefined8 *)(param_4 + 0x3e4) = *(undefined8 *)(param_4 + 0x38c);
  *(undefined4 *)(param_4 + 0x3ec) = *(undefined4 *)(param_4 + 0x394);
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar11 = *(uint *)(param_4 + 0x464);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x013afb4c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013afb4c;
    }
  }
  uVar11 = 0;
joined_r0x013afb4c:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7b8);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbc7b0);
    puVar3 = PTR_DAT_04bb4798;
    uVar2 = 0;
    if ((int)lVar8 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      uVar2 = *(uint *)(plVar10 + 0x54);
      lVar8 = (long)(int)uVar2;
      lVar12 = *(long *)(*(long *)PTR_DAT_04bb4798 + 0x10);
      uVar11 = *(uint *)(*(long *)PTR_DAT_04bb4798 + 8);
      bVar9 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
      uVar7 = FUN_013e53dc(plVar10);
      if ((1 < bVar9) && ((uVar7 & 1) != 0)) {
        if (uVar11 <= uVar2 || lVar12 == 0) {
          lVar8 = 0;
        }
        puVar1 = (undefined1 *)(lVar12 + lVar8 * 0x10);
        puVar1[8] = puVar1[8] & 0xf0 | 5;
        bVar9 = (byte)((uint)(int)*(float *)(param_4 + 0x3d8) >> 8);
        *puVar1 = (char)(int)*(float *)(param_4 + 0x3d8);
        puVar1[1] = puVar1[1] & 0xf0 | bVar9 & 0xf;
        fVar14 = *(float *)(param_4 + 0x3e0);
        puVar1[2] = (char)((uint)(int)fVar14 >> 4);
        puVar1[1] = bVar9 & 0xf | (byte)((int)fVar14 << 4);
        puVar4 = PTR_DAT_04bb32e0;
        bVar9 = *PTR_DAT_04bb32e0;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        puVar1[0xd] = bVar9;
        bVar9 = *puVar4;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        puVar1[0xc] = bVar9;
        if ((*(byte *)((long)plVar10 + 0x274) & 4) == 0) {
          FUN_013d8724(*(undefined8 *)puVar3,(int)plVar10[0x54]);
          return;
        }
      }
    }
  }
  return;
}

