
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ccda0(long param_1,ushort *param_2)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_70;
  int local_68;
  uint uStack_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_34;
  
  local_34 = (int)*(char *)(param_1 + 0x1d0);
  if (local_34 != -1) {
    FUN_027a19d8(&local_34,1000);
    uVar3 = *param_2;
    uVar4 = param_2[1];
    bVar2 = *(byte *)((long)param_2 + 3);
    nn::time::IsValidDate((uint)uVar3,(uint)(byte)uVar4,(uint)bVar2);
    FUN_01b46be0(&local_70);
    iVar6 = local_34;
    if ((*PTR_DAT_04bb8aa8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_04f292d0);
      if (iVar7 != 0) {
        FUN_00dd5f80(&DAT_04f292c0);
        __cxa_guard_release(&DAT_04f292d0);
      }
    }
    if (0 < (int)DAT_04f292c0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_04f292c8 + uVar9 * 4) == 0x19) goto LAB_027cce4c;
        uVar9 = uVar9 + 1;
      } while (DAT_04f292c0 != uVar9);
    }
    uVar9 = 0;
LAB_027cce4c:
    uStack_64 = (uint)bVar2 << 0x18 | (uint)(byte)uVar4 << 0x10 | (uint)uVar3;
    local_50 = (undefined4)uVar9;
    uStack_4c = 8;
    local_48 = 3;
    local_3c = 0;
    local_44 = _DAT_05586008;
    uStack_40 = DAT_0558600c;
    local_68 = iVar6;
    lVar8 = (**(code **)(local_70 + 0x20))(&local_70,DAT_0532d280);
    plVar5 = DAT_0532d278;
    if (lVar8 != 0) {
      lVar10 = *DAT_0532d278;
      plVar1 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar8);
      *DAT_0532d278 = (long)plVar1;
      *plVar1 = lVar10;
      plVar1[1] = (long)plVar5;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar1;
      }
      *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
    }
    *(undefined1 *)(param_1 + 0x1d0) = 0xff;
  }
  return;
}

