
ulong FUN_01463040(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  
  uVar9 = *(uint *)(param_1 + 0x39c);
  if (uVar9 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x39c) = 0;
    if (((DAT_051d5318 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_051d5318), iVar5 != 0)) {
      DAT_051d5310 = 0;
      __cxa_guard_release(&DAT_051d5318);
    }
    if (((DAT_051d5328 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_051d5328), iVar5 != 0)) {
      DAT_051d5320 = 1;
      __cxa_guard_release(&DAT_051d5328);
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x2f0) + 0x1150);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x50), lVar8 != 0)) {
      iVar5 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        puVar7 = &DAT_0407ebb1;
        if (DAT_051d5310 < 0x15) {
          puVar7 = (undefined8 *)(&PTR_DAT_0499b7e0)[DAT_051d5310];
        }
        FUN_007a89b8(&local_88,&DAT_040ec793,puVar7,iVar5);
        (**(code **)(local_88 + 0x18))(&local_88);
        uStack_90 = local_80;
        local_98 = puVar1;
        if (*(int *)(lVar8 + 200) != 0) {
          plVar10 = *(long **)(lVar8 + 0xd0);
          iVar13 = 0;
          lVar12 = (long)*(int *)(lVar8 + 200) << 3;
          do {
            lVar11 = *plVar10;
            iVar3 = FUN_039fe6a0(lVar11,&local_98);
            if (-1 < iVar3) {
              uVar9 = (iVar3 + iVar13) * 0x10000;
              goto LAB_014631cc;
            }
            plVar10 = plVar10 + 1;
            lVar12 = lVar12 + -8;
            iVar13 = iVar13 + (uint)*(ushort *)(*(long *)(lVar11 + 0x20) + 0xe2);
          } while (lVar12 != 0);
        }
        uVar9 = 0xffffffff;
LAB_014631cc:
        (**(code **)(local_88 + 0x18))(&local_88);
        local_98 = PTR_DAT_04bb2020 + 0x10;
        uStack_90 = local_80;
        uVar4 = FUN_039b04f0(lVar8,0,&local_98);
        if (((0xfffeffff < uVar9) || ((uVar9 & 0xffff) == 0xffff)) &&
           ((0xfffeffff < uVar4 || ((uVar4 & 0xffff) == 0xffff)))) break;
        iVar5 = iVar5 + 1;
        *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x39c) + 1;
      } while (iVar5 != 10);
    }
    uVar9 = *(uint *)(param_1 + 0x39c);
  }
  if ((int)uVar9 < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x38c);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x390);
    uVar4 = uVar4 ^ uVar4 << 0xb;
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x394);
    uVar2 = *(uint *)(param_1 + 0x398);
    *(uint *)(param_1 + 0x394) = uVar2;
    uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
    *(uint *)(param_1 + 0x398) = uVar4;
    uVar6 = (ulong)uVar4 * (ulong)uVar9 >> 0x20;
  }
  return uVar6;
}

