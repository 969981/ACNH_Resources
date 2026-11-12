
void FUN_009a5a20(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined2 *puVar14;
  byte bVar15;
  long *plVar16;
  char *__dest;
  uint uVar17;
  char local_d4 [127];
  undefined1 local_55;
  
  puVar7 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar17 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar17 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar17)) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar7;
    iVar9 = (**(code **)(*plVar10 + 0x60))();
    if (iVar9 < 0x11) {
      uVar17 = 1;
      goto joined_r0x009a5af4;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x009a5af4;
    }
  }
  uVar17 = 0;
joined_r0x009a5af4:
  if (plVar16 != (long *)0x0) {
    lVar12 = plVar16[0x2a];
    if (((*PTR_DAT_04bb6038 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6038);
    }
    uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb6030);
    puVar7 = PTR_DAT_04bb32e0;
    uVar1 = 0;
    if ((int)lVar12 == 1) {
      uVar1 = uVar17;
    }
    if (((uVar11 & 1) != 0) && (uVar1 != 0)) {
      iVar9 = *param_2;
      if (*(int *)((long)plVar16 + 0x284) == iVar9) {
        uVar11 = 0;
      }
      else if (*(int *)((long)plVar16 + 0x424) == iVar9) {
        uVar11 = 1;
      }
      else if (*(int *)((long)plVar16 + 0x5c4) == iVar9) {
        uVar11 = 2;
      }
      else if (*(int *)((long)plVar16 + 0x764) == iVar9) {
        uVar11 = 3;
      }
      else if (*(int *)((long)plVar16 + 0x904) == iVar9) {
        uVar11 = 4;
      }
      else if (*(int *)((long)plVar16 + 0xaa4) == iVar9) {
        uVar11 = 5;
      }
      else if (*(int *)((long)plVar16 + 0xc44) == iVar9) {
        uVar11 = 6;
      }
      else if (*(int *)((long)plVar16 + 0xde4) == iVar9) {
        uVar11 = 7;
      }
      else {
        uVar11 = (ulong)(byte)*PTR_DAT_04bb32e0;
        if (7 < (byte)*PTR_DAT_04bb32e0) {
          return;
        }
      }
      lVar12 = param_1 + 0x1a8;
      local_d4[0] = '\0';
      lVar13 = lVar12 + uVar11 * 0xb0;
      __dest = *(char **)(lVar13 + 0x10);
      *(undefined8 *)(lVar13 + 0xa0) = 0;
      *(undefined4 *)(lVar13 + 0xa8) = 0;
      if (__dest != local_d4) {
        lVar13 = 0;
        local_55 = 0;
        do {
          if (local_d4[lVar13] == '\0') goto LAB_009a5c8c;
          if (local_d4[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_009a5c8c;
          }
          if (local_d4[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_009a5c8c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_009a5c8c:
        iVar2 = *(int *)(lVar12 + uVar11 * 0xb0 + 0x18);
        iVar9 = (int)lVar13;
        if (iVar2 <= (int)lVar13) {
          iVar9 = iVar2 + -1;
        }
        memcpy(__dest,local_d4,(long)iVar9);
        __dest[iVar9] = '\0';
      }
      puVar8 = PTR_DAT_04bb37e0;
      param_1 = param_1 + uVar11 * 0x20;
      puVar14 = (undefined2 *)(lVar12 + uVar11 * 0xb0);
      uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
      *puVar14 = uVar6;
      uVar4 = puVar8[2];
      *(undefined1 *)(puVar14 + 1) = uVar4;
      uVar5 = puVar8[3];
      *(undefined1 *)((long)puVar14 + 3) = uVar5;
      uVar3 = *(undefined4 *)(puVar8 + 4);
      *(undefined4 *)(puVar14 + 2) = uVar3;
      bVar15 = *puVar7;
      *(undefined2 *)(param_1 + 8) = uVar6;
      *(undefined1 *)(param_1 + 10) = uVar4;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      *(undefined1 *)(param_1 + 0xb) = uVar5;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      *(byte *)(puVar14 + 0x56) = bVar15;
      FUN_0099f650(plVar16 + uVar11 * 0x34 + 0x4f);
    }
  }
  return;
}

