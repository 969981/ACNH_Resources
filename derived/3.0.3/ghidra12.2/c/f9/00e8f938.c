
void FUN_00e8f938(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 8);
  uVar8 = *param_2;
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
      goto joined_r0x00e8fa00;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e8fa00;
    }
  }
  uVar8 = 0;
joined_r0x00e8fa00:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar9 = (undefined8 *)plVar7[0x77];
      if (((*PTR_DAT_04bb6860 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6860);
      }
      if (((puVar9 != (undefined8 *)0x0) &&
          (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6858), (uVar5 & 1) != 0)) &&
         ((*(int *)((long)puVar9 + 0x77f4) == 0x3d || (*(int *)(puVar9 + 0xef6) == 0x3d)))) {
        *(uint *)(lVar10 + 0xe8) = *param_2;
        lVar6 = plVar7[0x76];
        local_80 = 0x166d;
        FUN_0277d4ac(&local_80);
        local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
        local_24 = 0;
        FUN_01e5a930(0x40000000,lVar6,0xe,PTR_DAT_04bb2150,&local_78,&local_24,PTR_DAT_04bc1600,6);
        local_45 = 0;
        local_64[0] = 0;
        *(undefined4 *)(lVar6 + 0x40c) = local_80._4_4_;
        *(undefined4 *)(lVar6 + 0x408) = (undefined4)local_80;
        puStack_70 = local_64;
        local_68 = 0x20;
        lVar6 = *(long *)(lVar6 + 0x358);
        local_78 = PTR_DAT_04bb2028 + 0x10;
        (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
        FUN_038d1270(&local_78,"NpcActorAction.%s",*(undefined8 *)(lVar6 + 1000));
      }
    }
  }
  return;
}

