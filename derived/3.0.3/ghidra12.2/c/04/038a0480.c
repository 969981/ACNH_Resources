
void FUN_038a0480(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_78;
  uint local_70 [4];
  
  puVar1 = PTR_DAT_04bc1510;
  lVar8 = 0;
  lVar7 = param_1 + 0x15a;
  do {
    iVar2 = *(int *)(param_1 + 0x15a + lVar8 + -0x5a);
    if (iVar2 != 0) {
      uVar3 = FUN_002ab090(*(long *)puVar1 + 0x10,iVar2,0x75);
      iVar2 = thunk_FUN_0021ca80();
      if (iVar2 == 0) {
        thunk_FUN_0021cee4(local_70,uVar3);
      }
      thunk_FUN_0021dc00(local_70,uVar3,0xffffffff);
      *(bool *)lVar7 = local_70[0] == 0;
      thunk_FUN_0021d450(local_70,uVar3,0);
      *(bool *)(lVar7 + -2) = local_70[0] == 0;
      if ((local_70[0] == 0) ||
         (((local_70[0] & 0x3e000) != 0x4000 && (iVar2 = thunk_FUN_0021ca80(uVar3), iVar2 == 2)))) {
        *(undefined1 *)(lVar7 + -1) = 0;
      }
      else {
        *(undefined1 *)(lVar7 + -1) = 1;
      }
    }
    lVar8 = lVar8 + 4;
    lVar7 = lVar7 + 3;
  } while (lVar8 != 0x40);
  if ((param_2 & 1) != 0) {
    uVar3 = FUN_002ab090(*(long *)puVar1 + 0x10,*(undefined4 *)(param_1 + 0x140),0x77);
    lVar8 = nn::os::GetSystemTick();
    lVar8 = lVar8 - *(long *)(param_1 + 0x148);
    if (lVar8 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
      lVar7 = 0;
      if (*(long *)PTR_DAT_04bb29d0 != 0) {
        lVar7 = (lVar8 * 1000000) / *(long *)PTR_DAT_04bb29d0;
      }
    }
    else {
      if (lVar8 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
        lVar6 = 1000;
        lVar7 = 0;
        if (*(long *)PTR_DAT_04bb29d0 != 0) {
          lVar7 = (lVar8 * 1000) / *(long *)PTR_DAT_04bb29d0;
        }
      }
      else {
        lVar7 = 0;
        if (DAT_05ae7888 != 0) {
          lVar7 = lVar8 / DAT_05ae7888;
        }
        lVar6 = 1000000;
      }
      lVar7 = lVar7 * lVar6;
    }
    uVar4 = nn::os::GetSystemTick();
    *(undefined8 *)(param_1 + 0x148) = uVar4;
    FUN_00218cec(uVar3,lVar7,1,lVar7 << 1);
    uVar5 = FUN_00218dd0(uVar3);
    if (((uVar5 & 1) == 0) && ((*(byte *)(param_1 + 0x188) & 1) != 0)) {
      FUN_00218934(local_70,uVar3);
    }
    local_78 = 0;
    *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) & 0xfffffffe;
    FUN_00218dec(local_70,uVar3,&local_78);
    if (local_70[0] == 0) {
      if (local_78 != 0xffffffffffffffff) {
        local_78 = local_78 / 1000;
      }
      *(ulong *)(param_1 + 0x150) = local_78;
    }
  }
  return;
}

