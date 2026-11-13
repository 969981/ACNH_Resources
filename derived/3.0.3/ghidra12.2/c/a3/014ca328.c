
void FUN_014ca328(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  
  local_58 = *(undefined4 *)(param_4 + 0xa3c);
  local_4c = 0;
  local_54 = 0;
  uVar11 = *(undefined4 *)(param_4 + 0xa44);
  local_60 = PTR_DAT_04bbbc20 + 0x10;
  if (*(uint *)(param_4 + 0xb28) < 8) {
    uVar4 = 1 << (ulong)(*(uint *)(param_4 + 0xb28) & 0x1f);
    if ((uVar4 & 0x3c) == 0) {
      if ((uVar4 & 0x43) == 0) {
        uVar4 = *(uint *)(param_4 + 0x754);
        iVar5 = 7;
      }
      else {
        uVar4 = *(uint *)(param_4 + 0x754);
        iVar5 = *(int *)(param_4 + 0x758);
      }
    }
    else {
      iVar5 = *(int *)(param_4 + 0xb28);
      uVar4 = iVar5 << 0x1e ^ 0x80000000;
    }
    local_4c = CONCAT44(iVar5,uVar4);
  }
  local_50 = uVar11;
  if (*(int *)(param_4 + 0x738) == 4) {
    lVar6 = FUN_014bac20(param_4 + 0x7b0);
    if (((lVar6 != 0) && (iVar5 = FUN_02b820b0(), iVar5 == 0)) ||
       ((*(int *)(param_4 + 0x738) == 4 &&
        ((lVar6 = FUN_014bac20(param_4 + 0x7b0), lVar6 != 0 && (iVar5 = FUN_02b820b0(), iVar5 == 1))
        )))) {
      fVar10 = (float)FUN_014e8b30(param_4 + 0x720);
      plVar9 = *(long **)(param_4 + 0x80);
      if (plVar9 != (long *)0x0) {
        if (((*PTR_DAT_04bb3e10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3e10), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3e08 = PTR_DAT_04bb3040 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3e10);
        }
        uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bb3e08);
        if ((uVar7 & 1) != 0) {
          if ((*(byte *)(plVar9 + 0x55) & 1) == 0) {
            lVar6 = 0;
          }
          else {
            lVar8 = plVar9[0x56];
            lVar6 = 0;
            if ((lVar8 != 0) && (lVar6 = *(long *)(lVar8 + 0x18), (*(byte *)(lVar8 + 8) & 10) != 2))
            {
              lVar6 = 0;
            }
          }
          iVar5 = *(int *)(lVar6 + 0x3c8);
          iVar3 = *(int *)(lVar6 + 0x3c0);
          if (iVar5 < iVar3) {
            *(int *)(lVar6 + 0x3c8) = iVar5 + 1;
            iVar5 = *(int *)(lVar6 + 0x3c4) + iVar5;
            iVar2 = 0;
            if (iVar3 <= iVar5) {
              iVar2 = iVar3;
            }
            if (*(long *)(lVar6 + 0x3b8) != 0) {
              puVar1 = (undefined1 *)(*(long *)(lVar6 + 0x3b8) + (long)(iVar5 - iVar2) * 0x20);
              *puVar1 = 0;
              *(undefined8 *)(puVar1 + 8) = 0;
              if (NAN(fVar10)) {
                fVar10 = NAN;
              }
              else {
                *(undefined4 *)(puVar1 + 0x14) = uVar11;
                *(undefined4 *)(puVar1 + 0x18) = param_3;
              }
              *(float *)(puVar1 + 0x10) = fVar10;
              *(undefined4 *)(puVar1 + 0x1c) = 0x19;
            }
          }
        }
      }
    }
  }
  FUN_014f20f8(param_4 + 0x700,&local_60);
  if (*(int *)(param_4 + 0x3c0) != 6) {
    FUN_03ebb160(param_4 + 0x3b8);
  }
  return;
}

