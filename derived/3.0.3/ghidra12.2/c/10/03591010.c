
void FUN_03591010(long param_1,uint param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  undefined *local_50;
  undefined4 local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + 0x618);
  lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x610);
  if (lVar4 != 0 && lVar3 != 0) {
    plVar6 = (long *)**(undefined8 **)(lVar4 + 0x230);
    plVar5 = (long *)**(undefined8 **)(lVar3 + 0x230);
    if (plVar6 != (long *)0x0 && plVar5 != (long *)0x0) {
      bVar2 = *(byte *)(param_1 + 0x195c);
      if ((bVar2 >> 4 & 1) == 0) {
        if ((bVar2 >> 5 & 1) == 0) {
          fVar7 = 0.0;
          if ((bVar2 & 0x40) != 0) {
            fVar7 = 7.0;
          }
        }
        else {
          if (3 < param_2) {
            param_2 = 0;
          }
          fVar7 = (float)*(int *)((long)&DAT_057726b8 + (ulong)param_2 * 4);
        }
      }
      else {
        fVar7 = 2.0;
      }
      local_48 = 0x14;
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_50 = puVar1;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
      (**(code **)(plVar6[3] + 0x158))(fVar7,plVar6[1]);
      local_48 = 0x14;
      local_50 = puVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
      (**(code **)(plVar5[3] + 0x158))(fVar7,plVar5[1]);
    }
  }
  return;
}

