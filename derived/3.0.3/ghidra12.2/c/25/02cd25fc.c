
/* WARNING: Removing unreachable block (ram,0x02cd2680) */

void FUN_02cd25fc(long *param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  undefined8 *puVar9;
  
  lVar5 = (**(code **)(*param_1 + 0x270))();
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x210) != 0)) {
    *(undefined1 *)(*(long *)(lVar5 + 0x210) + 0x54) = 1;
  }
  lVar5 = (**(code **)(*param_1 + 0x278))(param_1);
  if ((lVar5 != 0) && (1 < *(uint *)(lVar5 + 0x298))) {
    FUN_03ebb160(lVar5 + 0x290,1);
  }
  puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar9 != (undefined8 *)0x0) &&
     (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc7278), (uVar6 & 1) != 0)) {
    *(byte *)((long)puVar9 + 0x239) = *(byte *)((long)puVar9 + 0x239) | 6;
  }
  (**(code **)(*param_1 + 0x360))(param_1,0);
  plVar7 = (long *)(**(code **)(*param_1 + 0x270))(param_1);
  (**(code **)(*plVar7 + 0x128))(plVar7,0);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((((*(uint *)(puVar1 + 4) & 1) != 0) && (*(long *)PTR_DAT_04bb27d0 != 0)) &&
       (*(int *)(*(long *)PTR_DAT_04bb27d0 + 0x80) == 3)) {
      uVar2 = *(undefined2 *)PTR_DAT_04bb3170;
      *(undefined1 *)((long)param_1 + 0x1c32c) = 1;
      bVar8 = *(byte *)(param_1 + 0x3f);
      *(undefined4 *)((long)param_1 + 0x1c39c) = 0;
      *(undefined4 *)(param_1 + 0x3865) = 0;
      *(undefined1 *)(param_1 + 0x3867) = 0;
      *(undefined2 *)(param_1 + 0x3873) = uVar2;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      *(byte *)((long)param_1 + 0x1c39a) = bVar8;
      param_1[0x3866] = (long)(param_1 + 0x386e);
    }
  }
  return;
}

