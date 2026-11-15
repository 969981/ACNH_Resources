
void FUN_023ca970(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  long *plVar13;
  uint local_98;
  uint local_94;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [63];
  undefined1 local_3d;
  uint local_38;
  uint local_34;
  
  *(undefined2 *)(param_1 + 0xcbc) = 0;
  uVar4 = *(ushort *)(param_1 + 0x1904);
  *(undefined4 *)(param_1 + 0x1f80) = 0;
  *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffe;
  local_34 = (uint)*(byte *)(param_1 + 0x1900);
  if (0x78 < local_34) {
    local_34 = 0;
  }
  local_38 = (uint)*(byte *)(param_1 + 0x1902);
  if (9 < local_38) {
    local_38 = 0;
  }
  if (((local_38 == 1) && (DAT_053e0208 != 0)) && (*(long *)(DAT_053e0208 + 0x175a0) != 0)) {
    FUN_02119824(*(long *)(DAT_053e0208 + 0x175a0),&local_34);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    local_3d = 0;
    local_80 = 0x40;
    puStack_88 = local_7c;
    local_7c[0] = 0;
    local_90 = PTR_DAT_04bb2bc0 + 0x10;
    uVar7 = FUN_02537880(&local_90,&local_34);
    if (((uVar7 & 1) != 0) && (puVar8 = (uint *)FUN_0171ee68(&local_90), puVar8 != (uint *)0x0)) {
      uVar1 = *puVar8;
      if ((uVar1 == 0) || (puVar8 == (uint *)(ulong)uVar1)) {
LAB_023caacc:
        if (*(int *)(param_1 + 0x1810) != 8) goto LAB_023caafc;
        uVar7 = FUN_016ebc50(0,*(long *)(param_1 + 0x68) + 0x278);
        if ((uVar7 & 1) == 0) {
          uVar9 = 1;
        }
        else {
          uVar9 = 5;
        }
      }
      else {
        puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar1);
        if (((*puVar12 == 0) || (uVar1 = puVar12[1], uVar1 == 0)) ||
           ((ulong)(ushort)puVar12[2] == 0)) goto LAB_023caacc;
        lVar10 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar10 == 0) goto LAB_023caacc;
        uVar11 = 0;
        if ((ulong)uVar1 != 0) {
          uVar11 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar1);
        }
        if (*puVar12 <= uVar11) {
          uVar11 = 0xffffffff;
        }
        if ((DAT_05248f30 <= uVar11) || (*(short *)(DAT_05248f38 + (long)(int)uVar11 * 2) != 6))
        goto LAB_023caacc;
        uVar9 = 8;
      }
      *(undefined4 *)(param_1 + 0x1810) = uVar9;
    }
  }
LAB_023caafc:
  *(undefined1 *)(param_1 + 0xcbd) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
    if (lVar10 == 0) {
      plVar13 = &DAT_04c931a0;
    }
    else {
      plVar13 = (long *)(*(long *)(lVar10 + 0x88) + 0x60);
    }
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    if ((char *)plVar13[1] == "MaReAddSitDown") {
LAB_023caba0:
      *(undefined1 *)(param_1 + 0xcbd) = 1;
    }
    else {
      uVar7 = 0;
      bVar5 = true;
      do {
        cVar3 = ((char *)plVar13[1])[uVar7];
        if (cVar3 != "MaReAddSitDown"[uVar7]) break;
        if (cVar3 == '\0') {
          if (bVar5) goto LAB_023caba0;
          break;
        }
        bVar5 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
    }
  }
  uVar1 = (uint)uVar4 * 0x10000;
  if (local_38 == 6) {
    lVar10 = FUN_0251e98c(1);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    uVar7 = (**(code **)(*(long *)(lVar10 + 0x4b0) + 0x118))(lVar10 + 0x4b0,&local_90);
    if ((uVar7 & 1) != 0) {
      local_94 = local_34;
      FUN_023c79d0(param_1,&local_94,&local_38);
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_054f0960);
        puVar8 = (uint *)&DAT_054f0958;
        if (iVar6 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar8 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar8 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar8 = puVar8 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    uVar11 = *puVar8 | 8;
    goto LAB_023cad54;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  uVar11 = uVar2 + (uint)uVar4 * -0x10000;
  if (uVar11 == 0) {
LAB_023cac60:
    local_98 = local_34;
    FUN_023c79d0(param_1,&local_98,&local_38);
  }
  else {
    if (uVar2 <= uVar1) {
      uVar11 = uVar1 - uVar2;
    }
    uVar2 = -uVar11;
    if (uVar11 < 0x80000001) {
      uVar2 = uVar11;
    }
    if ((float)uVar2 * 8.381903e-08 < 3.0) goto LAB_023cac60;
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 1;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_054f0960);
      puVar8 = (uint *)&DAT_054f0958;
      if (iVar6 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar8 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar8 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar8 = puVar8 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  uVar11 = *puVar8 & 0xfffffff7;
LAB_023cad54:
  *puVar8 = uVar11;
  if (uVar1 == (uint)*(ushort *)(*(long *)(param_1 + 0x68) + 0x2b6) * 0x10000) {
    *(undefined1 *)(param_1 + 0xcbc) = 1;
  }
  return;
}

