
/* WARNING: Removing unreachable block (ram,0x02687034) */

uint FUN_02686ff0(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 != 0) {
    local_58 = CONCAT44(local_58._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       lVar5 != 0)) {
      plVar1 = (long *)(lVar5 + 0x5d3e08);
      if ((*(long *)(&DAT_005d3e28 + lVar5) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(&DAT_005d3e28 + lVar5) + 0x10),
         puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      puVar2 = PTR_DAT_04bb43c0;
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_1);
      if (*(long *)puVar2 == 0) {
LAB_02687194:
        uVar4 = 0;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02687194;
        if ((*(long *)(&DAT_005d3e28 + lVar5) != 0) &&
           (plVar7 = *(long **)(*(long *)(&DAT_005d3e28 + lVar5) + 0x20), plVar7 != (long *)0x0)) {
          local_58 = *plVar1;
          local_50 = *(undefined8 *)(lVar5 + 0x5d3e10);
          uStack_48 = 0x754;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
        }
        FUN_0277a1f4(*(long *)(lVar5 + 0x5d3e10) + *plVar1,param_1);
        if ((*(long *)(&DAT_005d3e28 + lVar5) != 0) &&
           (plVar7 = *(long **)(*(long *)(&DAT_005d3e28 + lVar5) + 0x20), plVar7 != (long *)0x0)) {
          local_58 = *plVar1;
          local_50 = *(undefined8 *)(lVar5 + 0x5d3e10);
          uStack_48 = 0x754;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
        }
        uVar4 = FUN_02779e74(*(long *)(lVar5 + 0x5d3e10) + *plVar1,param_1,1);
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(&DAT_005d3e28 + lVar5) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(&DAT_005d3e28 + lVar5) + 0x18),
         puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      goto LAB_02687090;
    }
  }
  uVar4 = 0;
LAB_02687090:
  return uVar4 & 1;
}

