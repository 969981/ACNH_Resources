
/* WARNING: Removing unreachable block (ram,0x03865c0c) */

void FUN_03865b70(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  
  lVar2 = *(long *)(param_2 + 2);
  lVar5 = *(long *)(param_1 + 0x2d8);
  plVar4 = *(long **)(lVar2 + 0x218);
  if (plVar4[3] == lVar5) {
    if ((char)param_2[4] != '\0') {
      *(byte *)(lVar2 + 0x2c4) = *(byte *)(lVar2 + 0x2c4) | 1;
      lVar5 = *(long *)(param_1 + 0x2d8);
    }
    uVar1 = *param_2;
    if (((uVar1 < *(uint *)(lVar5 + 0x18)) &&
        (lVar2 = *(long *)(*(long *)(lVar5 + 0x20) + (long)(int)uVar1 * 8), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0x10), plVar3 != plVar4)) {
      if (plVar3 != (long *)0x0) {
        local_34 = 1;
        uStack_44 = 0;
        local_40 = 0;
        local_50 = plVar3;
        local_48 = uVar1;
        (**(code **)plVar3[8])(plVar3 + 8,1,&local_50);
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      FUN_03d48b78(lVar5,uVar1,plVar4,0);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      *(int *)(lVar2 + 4) = (int)plVar4[0x294];
      *(undefined4 *)(lVar2 + 8) = *(undefined4 *)((long)plVar4 + 0x14a4);
    }
  }
  return;
}

