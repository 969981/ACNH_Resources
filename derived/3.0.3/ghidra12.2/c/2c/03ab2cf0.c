
void FUN_03ab2cf0(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  
  uVar6 = *(undefined8 *)(param_3 + 1000);
  uVar7 = *(undefined8 *)(param_3 + 0x3d8);
  lVar8 = *(long *)(param_1 + 8);
  if (*(char *)(lVar8 + 0x4f0) != '\0') {
    iVar23 = *(int *)(lVar8 + 0x1680);
    iVar22 = *(int *)(lVar8 + 0x16a0);
    lVar8 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar8 == 0) {
      uVar4 = nn::os::GetCurrentCoreNumber();
    }
    else {
      uVar4 = (int)lVar8 - 1;
    }
    if (*(uint *)(param_1 + 0x7a8) <= uVar4) {
      uVar4 = 0;
    }
    piVar14 = (int *)(*(long *)(param_1 + 0x7b0) + (long)(int)uVar4 * 0x28);
    *(undefined8 *)(piVar14 + 2) = uVar6;
    *(long *)(piVar14 + 4) = param_3;
    *(undefined1 *)(piVar14 + 8) = 1;
    uVar4 = *(uint *)(param_1 + 0x15e0);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        uVar11 = uVar5;
        if (*(uint *)(param_1 + 0x15e0) <= uVar5) {
          uVar11 = 0;
        }
        puVar9 = (uint *)(*(long *)(param_1 + 0x15e8) + (ulong)uVar11 * 0x68);
        plVar17 = *(long **)(puVar9 + 0xc);
        if ((plVar17 != (long *)0x0) &&
           (0 < (int)(1 << (ulong)(*(byte *)(param_3 + 8) & 0x1f) & *(uint *)(plVar17 + 0x34)))) {
          *piVar14 = uVar5 + 10;
          lVar8 = *(long *)(param_3 + 0x318);
          lVar18 = *(long *)(puVar9 + 2);
          uVar11 = (uint)*(byte *)(param_3 + 8);
          if (*puVar9 <= (uint)*(byte *)(param_3 + 8)) {
            uVar11 = 0;
          }
          fVar21 = (1.0 / (float)iVar22) * (*(float *)(lVar8 + 0x1c) - *(float *)(lVar8 + 0x14));
          fVar19 = (1.0 / (float)iVar23) * (*(float *)(lVar8 + 0x18) - *(float *)(lVar8 + 0x10));
          fVar20 = 1.0;
          if (fVar19 <= 1.0) {
            fVar20 = fVar19;
          }
          fVar19 = 1.0;
          if (fVar21 <= 1.0) {
            fVar19 = fVar21;
          }
          if (fVar20 <= fVar19) {
            fVar20 = fVar19;
          }
          iVar12 = (int)(fVar20 * (float)(int)plVar17[0x35]);
          if (iVar12 < 0x21) {
            iVar12 = 0x20;
          }
          iVar16 = (int)(fVar20 * (float)*(int *)((long)plVar17 + 0x1ac));
          if (iVar16 < 0x21) {
            iVar16 = 0x20;
          }
          lVar8 = lVar18 + (ulong)uVar11 * 0xfc8;
          *(uint *)(lVar8 + 1000) = iVar12 + 7U & 0xfffffff8;
          *(uint *)(lVar8 + 0x408) = iVar16 + 7U & 0xfffffff8;
          uVar13 = (uint)*(byte *)(param_3 + 8);
          if (*puVar9 <= (uint)*(byte *)(param_3 + 8)) {
            uVar13 = 0;
          }
          lVar8 = *(long *)(puVar9 + 2) + (ulong)uVar13 * 0xfc8;
          iVar12 = *(int *)(lVar8 + 0x238);
          if (iVar12 < 2) {
            iVar12 = 1;
          }
          if (*(int *)(lVar8 + 0x370) <= iVar12) {
            iVar12 = *(int *)(lVar8 + 0x370);
          }
          FUN_03a0fcd0(lVar8 + 0x380,param_2,iVar12,*(undefined4 *)(lVar8 + 600));
          FUN_03aca4a0(lVar8,param_2);
          iVar12 = (**(code **)(*plVar17 + 0xb0))(plVar17);
          if ((iVar12 == *DAT_05aea4f0) && ((ulong)*(ushort *)(plVar17 + 0x16) < 0xe)) {
            *(undefined8 *)(param_3 + (ulong)*(ushort *)(plVar17 + 0x16) * 8 + 0x108) =
                 *(undefined8 *)(lVar18 + (ulong)uVar11 * 0xfc8 + 0x550);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
  }
  lVar8 = *(long *)(param_1 + 8);
  if (((*(char *)(lVar8 + 0xa10) != '\0') && (*(char *)(lVar8 + 0x4d0) != '\0')) &&
     (*(char *)(lVar8 + 0x1660) == '\0')) {
    bVar1 = *(byte *)(param_3 + 8);
    if ((*(uint *)(param_1 + 0x550) >> (ulong)(bVar1 & 0x1f) & 1) != 0) {
      cVar3 = *(char *)(param_1 + 0x559);
      lVar8 = *(long *)(param_1 + 0x480);
      uVar11 = *(uint *)(param_1 + 0x478);
      uVar5 = (uint)bVar1;
      uVar4 = (int)cVar3;
      if ((*(byte *)(param_1 + 0x558) & (int)*(char *)(param_1 + 0x55a) == (uint)bVar1) == 0) {
        uVar4 = uVar5;
      }
      if (uVar11 <= uVar4) {
        uVar4 = 0;
      }
      lVar18 = lVar8 + (long)(int)uVar4 * 0xfc8;
      if (uVar11 <= uVar5) {
        uVar5 = 0;
      }
      lVar15 = *(long *)(lVar18 + 0x550);
      sVar2 = *(short *)(lVar15 + 0x3a);
      if (uVar4 == uVar5) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar15 == 0) {
          uVar5 = nn::os::GetCurrentCoreNumber();
        }
        else {
          uVar5 = (int)lVar15 - 1;
        }
        if (*(uint *)(param_1 + 0x7a8) <= uVar5) {
          uVar5 = 0;
        }
        puVar10 = (undefined4 *)(*(long *)(param_1 + 0x7b0) + (long)(int)uVar5 * 0x28);
        *(undefined1 *)(puVar10 + 8) = 0;
        *(undefined8 *)(puVar10 + 2) = uVar6;
        *(long *)(puVar10 + 4) = param_3;
        *puVar10 = 5;
        *(undefined8 *)(puVar10 + 6) = uVar7;
        if (*(long *)(lVar8 + (long)(int)uVar4 * 0xfc8 + 0x558) == 0) {
          iVar22 = *(int *)(lVar18 + 0x238);
          if (iVar22 < 2) {
            iVar22 = 1;
          }
          if (*(int *)(lVar18 + 0x370) <= iVar22) {
            iVar22 = *(int *)(lVar18 + 0x370);
          }
          FUN_03a0fcd0(lVar18 + 0x380,param_2,iVar22,*(undefined4 *)(lVar18 + 600));
        }
        FUN_03aca4a0(lVar18,param_2);
        if (sVar2 == 1) {
          *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(lVar18 + 0x550);
        }
        else {
          *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar18 + 0x550);
          if (*(char *)(lVar8 + (long)(int)uVar4 * 0xfc8 + 0x4c8) != '\0') {
            *(long *)(param_3 + 0x30) = lVar8 + (long)(int)uVar4 * 0xfc8 + 0x730;
          }
          if (*(char *)(lVar8 + (long)(int)uVar4 * 0xfc8 + 0x508) != '\0') {
            *(long *)(param_3 + 0x38) = lVar8 + (long)(int)uVar4 * 0xfc8 + 0x818;
          }
        }
        *(undefined1 *)(param_3 + 0xb) = 0;
      }
      else if ((-1 < cVar3) && ((int)cVar3 < (int)uVar11)) {
        if (sVar2 == 1) {
          *(long *)(param_3 + 0x20) = lVar15;
        }
        else {
          *(long *)(param_3 + 0x28) = lVar15;
        }
      }
    }
  }
  return;
}

