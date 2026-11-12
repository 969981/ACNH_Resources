
void FUN_009a7540(long param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  undefined2 *puVar11;
  void *__dest;
  long *plVar12;
  uint uVar13;
  long lVar14;
  char local_c4 [127];
  undefined1 local_45;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar13 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
      goto joined_r0x009a7610;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x009a7610;
    }
  }
  uVar13 = 0;
joined_r0x009a7610:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    if (((*PTR_DAT_04bb6038 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6038);
    }
    uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb6030);
    puVar5 = PTR_DAT_04bb37e0;
    puVar4 = PTR_DAT_04bb32e0;
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      iVar6 = *param_2;
      if (*(int *)((long)plVar12 + 0x284) == iVar6) {
        uVar8 = 0;
      }
      else if (*(int *)((long)plVar12 + 0x424) == iVar6) {
        uVar8 = 1;
      }
      else if (*(int *)((long)plVar12 + 0x5c4) == iVar6) {
        uVar8 = 2;
      }
      else if (*(int *)((long)plVar12 + 0x764) == iVar6) {
        uVar8 = 3;
      }
      else if (*(int *)((long)plVar12 + 0x904) == iVar6) {
        uVar8 = 4;
      }
      else if (*(int *)((long)plVar12 + 0xaa4) == iVar6) {
        uVar8 = 5;
      }
      else if (*(int *)((long)plVar12 + 0xc44) == iVar6) {
        uVar8 = 6;
      }
      else if (*(int *)((long)plVar12 + 0xde4) == iVar6) {
        uVar8 = 7;
      }
      else {
        uVar8 = (ulong)(byte)*PTR_DAT_04bb32e0;
        if (7 < (byte)*PTR_DAT_04bb32e0) {
          return;
        }
      }
      puVar11 = (undefined2 *)(param_1 + 0x1a8 + uVar8 * 0xb0);
      lVar9 = 0;
      local_c4[0] = '\0';
      local_45 = 0;
      __dest = *(void **)(puVar11 + 8);
      *puVar11 = *(undefined2 *)PTR_DAT_04bb37e0;
      *(undefined *)(puVar11 + 1) = puVar5[2];
      *(undefined *)((long)puVar11 + 3) = puVar5[3];
      uVar2 = *(undefined4 *)(puVar5 + 4);
      *(undefined8 *)(puVar11 + 0x50) = 0;
      *(undefined4 *)(puVar11 + 0x54) = 0;
      *(undefined4 *)(puVar11 + 2) = uVar2;
      do {
        if (local_c4[lVar9] == '\0') goto LAB_009a77bc;
        if (local_c4[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_009a77bc;
        }
        if (local_c4[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_009a77bc;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_009a77bc:
      lVar14 = param_1 + 0x1a8 + uVar8 * 0xb0;
      iVar3 = *(int *)(lVar14 + 0x18);
      iVar6 = (int)lVar9;
      if (iVar3 <= (int)lVar9) {
        iVar6 = iVar3 + -1;
      }
      memcpy(__dest,local_c4,(long)iVar6);
      *(undefined1 *)((long)__dest + (long)iVar6) = 0;
      bVar10 = *puVar4;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      *(byte *)(lVar14 + 0xac) = bVar10;
    }
  }
  return;
}

