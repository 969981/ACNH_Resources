
/* WARNING: Removing unreachable block (ram,0x03201898) */
/* WARNING: Removing unreachable block (ram,0x03201928) */

void FUN_032017e0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb2230;
  uVar1 = *(uint *)(param_1 + 2);
  if ((*(uint *)(*(long *)(param_1[1] + 0x218) + 0x14b0) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
    lVar4 = *param_1;
    lVar3 = *(long *)PTR_DAT_04bb2230;
    if (*(long *)(lVar3 + 0xd0) != 0) {
      *(undefined1 *)(*(long *)(lVar3 + 0xd0) + 0x26c) = 1;
    }
    if ((((lVar4 != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x210) + 0x48), uVar1 < *(uint *)(lVar4 + 0x18))) &&
        (lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + (long)(int)uVar1 * 8), lVar4 != 0)) &&
       (plVar5 = *(long **)(lVar4 + 0x10), plVar5 != (long *)0x0)) {
      local_34 = 1;
      *(int *)(lVar4 + 4) = (int)plVar5[0x294];
      *(undefined4 *)(lVar4 + 8) = *(undefined4 *)((long)plVar5 + 0x14a4);
      uStack_44 = 0;
      local_40 = 0;
      local_50 = plVar5;
      local_48 = uVar1;
      (**(code **)plVar5[8])(plVar5 + 8,1,&local_50);
      lVar3 = *(long *)puVar2;
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    if (*(long *)(lVar3 + 0xd0) != 0) {
      *(undefined4 *)(*(long *)(lVar3 + 0xd0) + 0x264) = 0;
    }
    uVar1 = *(uint *)(param_1 + 2);
    lVar3 = *(long *)(*(long *)(*param_1 + 0x210) + 0x48);
    if ((uVar1 < *(uint *)(lVar3 + 0x18)) &&
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + (long)(int)uVar1 * 8), lVar4 != 0)) {
      plVar6 = *(long **)(param_1[1] + 0x218);
      plVar5 = *(long **)(lVar4 + 0x10);
      if (plVar5 != plVar6) {
        if (plVar5 != (long *)0x0) {
          local_34 = 1;
          uStack_44 = 0;
          local_40 = 0;
          local_50 = plVar5;
          local_48 = uVar1;
          (**(code **)plVar5[8])(plVar5 + 8,1,&local_50);
          *(undefined8 *)(lVar4 + 0x10) = 0;
        }
        FUN_03d48b78(lVar3,uVar1,plVar6,0);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        *(int *)(lVar4 + 4) = (int)plVar6[0x294];
        *(undefined4 *)(lVar4 + 8) = *(undefined4 *)((long)plVar6 + 0x14a4);
      }
    }
  }
  return;
}

