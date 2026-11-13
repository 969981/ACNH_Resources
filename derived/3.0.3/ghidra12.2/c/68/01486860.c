
void FUN_01486860(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_50 = CONCAT44(local_50._4_4_,1);
  if ((*(uint *)(param_1 + 0x1418) >> 1 & 1) != 0) {
    if (((DAT_051e04f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_051e04f8), iVar3 != 0)) {
      DAT_051e04f0 = 0;
      __cxa_guard_release(&DAT_051e04f8);
    }
    lVar7 = *(long *)(param_1 + 0x1150);
    if (lVar7 != 0) {
      uVar6 = 0xffffffffffff;
      if ((*(long *)(param_1 + 0x1180) != 0) && (*(long *)(param_1 + 0x1160) != 0)) {
        uVar1 = DAT_051e04f0;
        if (*(uint *)(param_1 + 0x1178) <= DAT_051e04f0) {
          uVar1 = 0;
        }
        uVar6 = *(ulong *)(*(long *)(param_1 + 0x1180) + (long)(int)uVar1 * 8);
      }
      if ((((((uint)(uVar6 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar6 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar6 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        uVar8 = -(uVar6 >> 0xf & 1) & 0xfffffffffff80000 | (uVar6 & 0xffff) << 3;
        iVar3 = (int)(short)(uVar6 >> 0x10);
        iVar2 = (int)(short)(uVar6 >> 0x20);
        plVar4 = (long *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + uVar8);
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x150))(plVar4,iVar3,iVar2);
        local_50 = *puVar5;
        local_48 = *(undefined4 *)(puVar5 + 1);
        uStack_44 = 0x3f800000;
        plVar4 = (long *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + uVar8);
        (**(code **)(*plVar4 + 0x158))(plVar4,iVar3,iVar2,&local_50);
      }
    }
    if (((DAT_051e0508 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_051e0508), iVar3 != 0)) {
      DAT_051e0500 = 1;
      __cxa_guard_release(&DAT_051e0508);
    }
    lVar7 = *(long *)(param_1 + 0x1150);
    if (lVar7 != 0) {
      uVar6 = 0xffffffffffff;
      if ((*(long *)(param_1 + 0x1180) != 0) && (*(long *)(param_1 + 0x1160) != 0)) {
        uVar1 = DAT_051e0500;
        if (*(uint *)(param_1 + 0x1178) <= DAT_051e0500) {
          uVar1 = 0;
        }
        uVar6 = *(ulong *)(*(long *)(param_1 + 0x1180) + (long)(int)uVar1 * 8);
      }
      if ((((((uint)(uVar6 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar6 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar6 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        uVar8 = -(uVar6 >> 0xf & 1) & 0xfffffffffff80000 | (uVar6 & 0xffff) << 3;
        iVar3 = (int)(short)(uVar6 >> 0x10);
        iVar2 = (int)(short)(uVar6 >> 0x20);
        plVar4 = (long *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + uVar8);
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x150))(plVar4,iVar3,iVar2);
        local_50 = *puVar5;
        local_48 = *(undefined4 *)(puVar5 + 1);
        uStack_44 = 0x3f800000;
        plVar4 = (long *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + uVar8);
        (**(code **)(*plVar4 + 0x158))(plVar4,iVar3,iVar2,&local_50);
      }
    }
    if (((DAT_051e0518 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_051e0518), iVar3 != 0)) {
      DAT_051e0510 = 2;
      __cxa_guard_release(&DAT_051e0518);
    }
    lVar7 = *(long *)(param_1 + 0x1150);
    if (lVar7 != 0) {
      uVar6 = 0xffffffffffff;
      if ((*(long *)(param_1 + 0x1180) != 0) && (*(long *)(param_1 + 0x1160) != 0)) {
        uVar1 = DAT_051e0510;
        if (*(uint *)(param_1 + 0x1178) <= DAT_051e0510) {
          uVar1 = 0;
        }
        uVar6 = *(ulong *)(*(long *)(param_1 + 0x1180) + (long)(int)uVar1 * 8);
      }
      if ((((((uint)(uVar6 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar6 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar6 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        uVar8 = -(uVar6 >> 0xf & 1) & 0xfffffffffff80000 | (uVar6 & 0xffff) << 3;
        iVar3 = (int)(short)(uVar6 >> 0x10);
        iVar2 = (int)(short)(uVar6 >> 0x20);
        plVar4 = (long *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + uVar8);
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x150))(plVar4,iVar3,iVar2);
        local_50 = *puVar5;
        local_48 = *(undefined4 *)(puVar5 + 1);
        uStack_44 = 0x3f800000;
        plVar4 = (long *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + uVar8);
        (**(code **)(*plVar4 + 0x158))(plVar4,iVar3,iVar2,&local_50);
      }
    }
  }
  return;
}

