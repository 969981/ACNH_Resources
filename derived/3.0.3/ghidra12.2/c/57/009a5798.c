
void FUN_009a5798(long param_1,undefined2 *param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar8 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x009a5868;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x009a5868;
    }
  }
  uVar8 = 0;
joined_r0x009a5868:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb6038 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6038);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb6030);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      iVar3 = *param_3;
      if (*(int *)((long)plVar7 + 0x284) == iVar3) {
        uVar5 = 0;
      }
      else if (*(int *)((long)plVar7 + 0x424) == iVar3) {
        uVar5 = 1;
      }
      else if (*(int *)((long)plVar7 + 0x5c4) == iVar3) {
        uVar5 = 2;
      }
      else if (*(int *)((long)plVar7 + 0x764) == iVar3) {
        uVar5 = 3;
      }
      else if (*(int *)((long)plVar7 + 0x904) == iVar3) {
        uVar5 = 4;
      }
      else if (*(int *)((long)plVar7 + 0xaa4) == iVar3) {
        uVar5 = 5;
      }
      else if (*(int *)((long)plVar7 + 0xc44) == iVar3) {
        uVar5 = 6;
      }
      else if (*(int *)((long)plVar7 + 0xde4) == iVar3) {
        uVar5 = 7;
      }
      else {
        uVar5 = (ulong)(byte)*PTR_DAT_04bb32e0;
        if (7 < (byte)*PTR_DAT_04bb32e0) {
          return;
        }
      }
      param_1 = param_1 + uVar5 * 0x20;
      *param_2 = *(undefined2 *)(param_1 + 8);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 10);
      *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0xb);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return;
}

