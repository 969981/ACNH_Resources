
void FUN_009a7c84(long param_1,byte *param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*param_3 == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x009a7d5c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x009a7d5c;
    }
  }
  uVar9 = 0;
joined_r0x009a7d5c:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb6038 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6038);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb6030);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      iVar3 = *param_3;
      if (*(int *)((long)plVar8 + 0x284) == iVar3) {
        uVar5 = 0;
      }
      else if (*(int *)((long)plVar8 + 0x424) == iVar3) {
        uVar5 = 1;
      }
      else if (*(int *)((long)plVar8 + 0x5c4) == iVar3) {
        uVar5 = 2;
      }
      else if (*(int *)((long)plVar8 + 0x764) == iVar3) {
        uVar5 = 3;
      }
      else if (*(int *)((long)plVar8 + 0x904) == iVar3) {
        uVar5 = 4;
      }
      else if (*(int *)((long)plVar8 + 0xaa4) == iVar3) {
        uVar5 = 5;
      }
      else if (*(int *)((long)plVar8 + 0xc44) == iVar3) {
        uVar5 = 6;
      }
      else if (*(int *)((long)plVar8 + 0xde4) == iVar3) {
        uVar5 = 7;
      }
      else {
        uVar5 = (ulong)(byte)*PTR_DAT_04bb32e0;
        if (7 < (byte)*PTR_DAT_04bb32e0) {
          return;
        }
      }
      bVar7 = *(byte *)(param_1 + uVar5 * 0xb0 + 0x254);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      *param_2 = bVar7;
    }
  }
  return;
}

