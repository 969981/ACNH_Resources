
void FUN_02c7b008(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *local_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
    lVar1 = 0x28;
    if (*(uint *)(puVar4 + 0x44) < 6) {
      lVar1 = 0;
    }
    plVar5 = *(long **)(puVar4[0x45] + lVar1);
    if (plVar5 != (long *)0x0) {
      switch(*param_2) {
      case 0:
        uVar6 = 0x40800000;
        if (*(uint *)(param_1 + 0x1c1f0) < 2) {
          uVar6 = 0;
        }
        break;
      case 1:
        uVar6 = 0x3f800000;
        break;
      case 2:
        uVar6 = 0x40000000;
        break;
      case 3:
        uVar6 = 0x40400000;
        break;
      default:
        uVar6 = 0;
      }
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
      (**(code **)(plVar5[3] + 0x158))(uVar6,plVar5[1]);
    }
  }
  return;
}

