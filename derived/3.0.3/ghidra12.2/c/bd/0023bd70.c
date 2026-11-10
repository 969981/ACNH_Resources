
void FUN_0023bd70(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *local_68;
  undefined2 local_60;
  undefined4 local_5c;
  int local_58 [4];
  undefined4 local_48 [2];
  undefined4 local_40;
  
  uVar2 = FUN_002aaa64();
  local_48[0] = (**(code **)(*param_1 + 0x18))(param_1);
  plVar3 = (long *)FUN_002a8480(uVar2,local_48);
  (**(code **)(*(long *)*plVar3 + 0x78))();
  uVar4 = (**(code **)(*(long *)*plVar3 + 0x80))();
  if ((uVar4 & 1) == 0) {
    do {
      lVar7 = *plVar3;
      plVar8 = (long *)(lVar7 + 0x38);
      if (*plVar8 == 0) {
        plVar8 = (long *)0x0;
        FUN_0023fbdc(local_48);
        uVar5 = (uint)DAT_00000028;
        if ((DAT_00000028 & 1) == 0) goto LAB_0023bee4;
LAB_0023be68:
        lVar7 = 2;
        lVar6 = *plVar8;
      }
      else {
        FUN_0023fbdc(local_48);
        bVar1 = *(byte *)(lVar7 + 0x60);
        uVar5 = (uint)bVar1;
        if ((bVar1 & 1) != 0) goto LAB_0023be68;
LAB_0023bee4:
        lVar7 = 1;
        lVar6 = *plVar8;
      }
      if ((uVar5 >> 1 & 1) != 0) {
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 >> 2 & 1) != 0) {
        lVar7 = lVar7 + 4;
      }
      if ((uVar5 >> 3 & 1) != 0) {
        lVar7 = lVar7 + 8;
      }
      FUN_0023fc98(local_58,local_48,lVar6 + lVar7,*(undefined2 *)((long)plVar8 + 0x2a));
      if (local_58[0] == 0) {
        bVar1 = *(byte *)(plVar8 + 5);
        if ((bVar1 & 1) == 0) {
          lVar7 = 1;
        }
        else {
          lVar7 = 2;
        }
        if ((bVar1 >> 1 & 1) != 0) {
          lVar7 = lVar7 + 2;
        }
        if ((bVar1 >> 2 & 1) != 0) {
          lVar7 = lVar7 + 4;
        }
        if ((bVar1 >> 3 & 1) != 0) {
          lVar7 = lVar7 + 8;
        }
        memcpy(param_1 + 0x1b,(void *)(*plVar8 + lVar7),(ulong)*(ushort *)((long)plVar8 + 0x2a));
        local_60 = *(undefined2 *)((long)plVar8 + 0x2a);
        local_5c = local_40;
        local_68 = param_1 + 0x1b;
        FUN_0023d7ec(param_1,&local_68,plVar8 + 8);
      }
      (**(code **)(*(long *)*plVar3 + 0x88))();
      uVar4 = (**(code **)(*(long *)*plVar3 + 0x80))();
    } while ((uVar4 & 1) == 0);
  }
  return;
}

