
/* WARNING: Removing unreachable block (ram,0x01f73600) */

void FUN_01f73158(long *param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  
  bVar6 = false;
  if (*(int *)((long)param_1 + 0xaf34) != 0) {
    if (*(int *)((long)param_1 + 0xaf34) == 1) {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)((long)param_1 + 0xaf34) != 3;
    }
  }
  puVar1 = (ushort *)((long)param_1 + 0xaf64);
  if (*(int *)((long)param_1 + 0x77f4) == 0x3c) {
    bVar5 = true;
  }
  else {
    iVar3 = (int)param_1[0xef6];
    bVar5 = (*(int *)((long)param_1 + 0x77f4) == 0x10 || iVar3 == 0x3c) || iVar3 == 0x10;
  }
  lVar10 = param_1[1];
  if (*(int *)(lVar10 + 0x750) == 0) {
    if (!bVar6 && !bVar5) goto LAB_01f73220;
LAB_01f731f4:
    *(uint *)(*(long *)(lVar10 + 0x90) + 0x178) =
         *(uint *)(*(long *)(lVar10 + 0x90) + 0x178) & 0xfffffffe;
    lVar10 = *(long *)(param_1[1] + 0xa0);
    uVar9 = *(uint *)(lVar10 + 0x178) & 0xfffffffe;
  }
  else {
    if (*(int *)(lVar10 + 0x750) != 2) {
      bVar6 = true;
    }
    if (bVar5 || bVar6) goto LAB_01f731f4;
LAB_01f73220:
    *(uint *)(*(long *)(lVar10 + 0x90) + 0x178) = *(uint *)(*(long *)(lVar10 + 0x90) + 0x178) | 1;
    lVar10 = *(long *)(param_1[1] + 0xa0);
    uVar9 = *(uint *)(lVar10 + 0x178) | 1;
  }
  *(uint *)(lVar10 + 0x178) = uVar9;
  uVar4 = *puVar1;
  if ((uVar4 >> 10 & 1) != 0) {
    return;
  }
  *(int *)((long)param_1 + 0xaf94) = (int)param_1[0x15f2];
  if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
    if ((*(long *)PTR_DAT_04bb3968 == 0) ||
       ((lVar10 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar10 == 0 ||
        ((*(ushort *)(lVar10 + 0x1528) >> 2 & 1) == 0)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 2;
  }
  uVar2 = *(uint *)(param_1 + 0x15f1);
  uVar9 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  *(uint *)((long)param_1 + 0xaf84) =
       *(uint *)((long)param_1 + 0xaf84) &
       ((int)*(uint *)((long)param_1 + 0xaf84) >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x15f1) = uVar9;
  *(uint *)((long)param_1 + 0xaf8c) =
       *(uint *)((long)param_1 + 0xaf8c) &
       ((int)*(uint *)((long)param_1 + 0xaf8c) >> 0x1f ^ 0xffffffffU);
  *(undefined4 *)(param_1 + 0x15f2) = uVar11;
  if ((int)param_1[0x15f2] == 2) {
    if (*(int *)((long)param_1 + 0xaf94) != 2) goto LAB_01f73320;
  }
  else if ((uVar4 >> 0xb & 1) == 0) {
    if (*(int *)((long)param_1 + 0x77f4) == 0x10) {
      if ((uVar4 & 1) == 0) {
LAB_01f73318:
        if (*(int *)((long)param_1 + 0xaf34) == 0) {
          *(uint *)(param_1 + 0x15f1) = uVar9 - 1;
          if ((int)uVar2 < 1) {
            uVar8 = FUN_01e3cc1c(param_1[1]);
            if ((uVar8 & 1) == 0) {
              *(undefined4 *)(param_1 + 0x15f1) = 0x5a;
              FUN_01e3ccf8(param_1[1]);
            }
            else {
              FUN_01e3cdc4(param_1[1]);
              lVar10 = param_1[1];
              uVar9 = *(uint *)(lVar10 + 0x288);
              *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
              uVar9 = uVar9 ^ uVar9 << 0xb;
              *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
              uVar2 = *(uint *)(lVar10 + 0x294);
              *(uint *)(lVar10 + 0x290) = uVar2;
              uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
              *(uint *)(lVar10 + 0x294) = uVar9;
              *(int *)(param_1 + 0x15f1) = (int)((ulong)uVar9 * 900 >> 0x20) + 0x1194;
              if (((*(long *)PTR_DAT_04bb3968 != 0) &&
                  (lVar10 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar10 != 0)) &&
                 ((*(ushort *)(lVar10 + 0x1528) >> 2 & 1) == 0)) {
                (**(code **)(*param_1 + 0x400))(param_1);
                *puVar1 = *puVar1 & 0xfeff;
              }
            }
          }
          goto LAB_01f73384;
        }
      }
    }
    else if (((uVar4 & 1) == 0) || ((int)param_1[0xef6] != 0x10)) goto LAB_01f73318;
LAB_01f73320:
    lVar10 = param_1[1];
    uVar9 = *(uint *)(lVar10 + 0x288);
    *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
    uVar9 = uVar9 ^ uVar9 << 0xb;
    *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
    uVar2 = *(uint *)(lVar10 + 0x294);
    *(uint *)(lVar10 + 0x290) = uVar2;
    uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
    *(uint *)(lVar10 + 0x294) = uVar9;
    *(int *)(param_1 + 0x15f1) = (int)((ulong)uVar9 * 900 >> 0x20) + 0x1194;
    uVar8 = FUN_01e3cc1c(param_1[1]);
    if ((uVar8 & 1) != 0) {
      FUN_01e3cdc4(param_1[1]);
    }
  }
  else {
    uVar8 = FUN_01e3cc1c(param_1[1]);
    if ((uVar8 & 1) != 0) {
      FUN_01e3cdc4(param_1[1]);
      goto LAB_01f73320;
    }
  }
LAB_01f73384:
  lVar10 = param_1[2];
  if (((*(int *)(lVar10 + 0x360) != 0xc) || (*(int *)(*(long *)(lVar10 + 0x370) + 8) == 0)) ||
     ((int)param_1[0x15f2] != 0)) {
    lVar10 = param_1[1];
    uVar9 = *(uint *)(lVar10 + 0x288);
    *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
    uVar9 = uVar9 ^ uVar9 << 0xb;
    *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
    uVar2 = *(uint *)(lVar10 + 0x294);
    *(uint *)(lVar10 + 0x290) = uVar2;
    uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar9 ^ uVar2;
    *(uint *)(lVar10 + 0x294) = uVar9;
    *(int *)((long)param_1 + 0xaf8c) = (int)((ulong)uVar9 * 0x3c >> 0x20) + 0x1e;
    goto LAB_01f7342c;
  }
  iVar3 = *(int *)((long)param_1 + 0xaf8c);
  iVar7 = iVar3 + -1;
  *(int *)((long)param_1 + 0xaf8c) = iVar7;
  if (iVar7 != 0 && 0 < iVar3) goto LAB_01f7342c;
  iVar3 = *(int *)(lVar10 + 0x284);
  if (*(int *)(lVar10 + 0x4b8) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar10 + 0x378) == 0x23;
  }
  if ((iVar3 < 0x96) && (!bVar6)) goto LAB_01f7342c;
  puVar12 = *(undefined8 **)(param_1[1] + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  if ((puVar12[0x227] == 0) ||
     (uVar8 = FUN_03850368(puVar12[0x227],*(uint *)(puVar12 + 0x2d3) >> 1 & 1), (uVar8 & 1) == 0)) {
LAB_01f73730:
    if ((iVar3 < 0x96) && (*(char *)(*(long *)(param_1[2] + 0x370) + 0x15) == '\0'))
    goto LAB_01f7342c;
  }
  else {
    puVar12 = *(undefined8 **)(param_1[1] + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) != 0) {
        puVar12 = &DAT_05240280;
        goto LAB_01f73638;
      }
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar12 = &DAT_05240280;
      if (DAT_052413b8 != 0) goto LAB_01f73640;
LAB_01f73724:
      uVar9 = 0;
    }
    else {
LAB_01f73638:
      if (puVar12[0x227] == 0) goto LAB_01f73724;
LAB_01f73640:
      uVar9 = *(uint *)(puVar12 + 0x2d3) >> 1 & 1;
    }
    uVar8 = FUN_0170a6d0(puVar12,uVar9);
    if ((uVar8 & 1) == 0) goto LAB_01f73730;
  }
  (**(code **)(*param_1 + 0x400))(param_1);
LAB_01f7342c:
  uVar4 = *puVar1;
  if ((((uVar4 >> 8 & 1) != 0) &&
      (((*(long *)PTR_DAT_04bb3968 == 0 ||
        (lVar10 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar10 == 0)) ||
       ((*(ushort *)(lVar10 + 0x1528) >> 3 & 1) == 0)))) && (*(int *)(param_1[1] + 0x750) != 3)) {
    if (*(int *)((long)param_1 + 0xaf34) == 0) {
      iVar3 = *(int *)((long)param_1 + 0xaf84);
      *(int *)((long)param_1 + 0xaf84) = iVar3 + -1;
      if (iVar3 < 1) {
        *puVar1 = uVar4 & 0xfeff;
        FUN_01f72938(param_1,param_1 + 0x15f0);
        return;
      }
    }
    else {
      *puVar1 = uVar4 & 0xfeff;
    }
  }
  return;
}

