
void FUN_00e8f5fc(long param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 8);
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x00e8f6c4;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e8f6c4;
    }
  }
  uVar10 = 0;
joined_r0x00e8f6c4:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      puVar11 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb6860 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6860);
      }
      if ((((puVar11 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb6858), (uVar6 & 1) != 0)) &&
          ((*(int *)((long)puVar11 + 0x77f4) == 0x3d || (*(int *)(puVar11 + 0xef6) == 0x3d)))) &&
         (psVar7 = (short *)FUN_01e57b44(plVar9[0x76]), *psVar7 != -2)) {
        local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
        local_24 = 0;
        *(uint *)(lVar12 + 0xe8) = *param_2;
        lVar8 = plVar9[0x76];
        FUN_01e5a930(0x40000000,lVar8,0xe,PTR_DAT_04bb2150,&local_78,&local_24,PTR_DAT_04bc1600,6);
        local_45 = 0;
        local_64[0] = 0;
        uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        *(undefined4 *)(lVar8 + 0x408) = *(undefined4 *)PTR_DAT_04bb37e0;
        *(undefined4 *)(lVar8 + 0x40c) = uVar2;
        puStack_70 = local_64;
        local_68 = 0x20;
        lVar8 = *(long *)(lVar8 + 0x358);
        local_78 = PTR_DAT_04bb2028 + 0x10;
        (**(code **)(*(long *)(lVar8 + 0x3e0) + 0x18))(lVar8 + 0x3e0);
        FUN_038d1270(&local_78,"NpcActorAction.%s",*(undefined8 *)(lVar8 + 1000));
      }
    }
  }
  return;
}

