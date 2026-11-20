
/* WARNING: Removing unreachable block (ram,0x03d48b20) */

void FUN_03d48a00(long param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_64;
  
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)param_2 * 8);
    if (lVar4 != 0) {
      plVar1 = *(long **)(lVar4 + 0x10);
      if ((plVar1 == (long *)0x0) ||
         (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3), (uVar2 & 1) == 0)) {
        if (*(long *)(param_1 + 8) != param_1) {
          lVar5 = (long)*(int *)(param_1 + 0x14);
          plVar1 = (long *)(*(long *)(param_1 + 8) - lVar5);
          do {
            if (((*(long **)(lVar4 + 0x10) != plVar1) &&
                ((*(uint *)(plVar1 + 0x296) & 1 << (ulong)(param_2 & 0x1f)) != 0)) &&
               (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3), (uVar2 & 1) != 0)) {
              if (param_2 < *(uint *)(param_1 + 0x18)) {
                lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)param_2 * 8);
              }
              else {
                lVar5 = 0;
              }
              lVar3 = *(long *)(lVar5 + 0x10);
              if (lVar3 != 0) {
                local_64 = 1;
                uStack_74 = 0;
                local_70 = 0;
                local_80 = lVar3;
                local_78 = param_2;
                (*(code *)**(undefined8 **)(lVar3 + 0x40))((undefined8 *)(lVar3 + 0x40),1,&local_80)
                ;
                *(undefined8 *)(lVar5 + 0x10) = 0;
              }
              FUN_03d48b78(param_1,param_2,plVar1,0);
              goto LAB_03d48b48;
            }
            plVar1 = (long *)(*(long *)((long)plVar1 + lVar5 + 8) - lVar5);
          } while (plVar1 != (long *)(param_1 - lVar5));
        }
      }
      else {
LAB_03d48b48:
        *(undefined4 *)(lVar4 + 4) = *param_3;
        *(undefined4 *)(lVar4 + 8) = param_3[1];
      }
    }
  }
  return;
}

