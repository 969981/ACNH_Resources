
void FUN_01525dc8(long param_1,undefined2 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x100);
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    plVar10 = (long *)0x0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(DAT_0520f098 + 0x10);
    if ((((uVar7 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar7)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        if (*(uint *)(lVar8 + 0x5e8) < 5) {
          uVar7 = (uint)(0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3));
        }
      }
    }
    else {
      uVar7 = 0;
    }
    if (plVar10 != (long *)0x0) {
      if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7d58);
      }
      uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb7d50);
      if ((uVar5 & 1) == 0) {
        uVar7 = 0;
      }
    }
  }
  if ((lVar9 != 0 && plVar10 != (long *)0x0) && (uVar7 & 0xff) != 0) {
    lVar8 = param_1 + 0x70;
    if ((*(ushort *)(param_1 + 0x80) >> 1 & 1) != 0) {
      FUN_01596728(lVar8);
      FUN_015a30c0(lVar9,lVar8);
    }
    lVar1 = param_1 + 0xa0;
    if ((*(ushort *)(param_1 + 0xb0) >> 1 & 1) != 0) {
      FUN_01596728(lVar1);
      FUN_015a30c0(lVar9,lVar1);
    }
    puVar2 = PTR_DAT_04bb3170;
    if (*(char *)(param_1 + 0x98) != '\0') {
      *(undefined1 *)(param_1 + 0x98) = 0;
      *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)puVar2;
    }
    uVar5 = FUN_015a2a64(lVar9,lVar8,param_2,&DAT_041758f8,0,1,1);
    uVar6 = FUN_015a2df4(lVar9,lVar1,param_2,&DAT_041758f8,0,1);
    if (((uVar5 & 1) == 0) || ((uVar6 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x98) = 1;
      *(undefined2 *)(param_1 + 0x9a) = *param_2;
    }
  }
  return;
}

