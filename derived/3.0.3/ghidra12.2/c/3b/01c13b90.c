
void FUN_01c13b90(long *param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  byte local_74 [4];
  undefined4 local_70 [2];
  long local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  local_74[0] = *param_2;
  if (local_74[0] < 8) goto LAB_01c13c9c;
  if (DAT_04cd19d8 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_01c13c14:
    if (*pbVar6 < 8) goto LAB_01c13c80;
LAB_01c13c20:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01c13c78:
      pbVar6 = &DAT_0548e168;
      goto LAB_01c13c80;
    }
    lVar7 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_74[0] = *pbVar6;
    if (7 < local_74[0]) goto LAB_01c13c78;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01c13c14;
      }
      goto LAB_01c13c20;
    }
LAB_01c13c80:
    local_74[0] = *pbVar6;
    if (7 < local_74[0]) {
      local_74[0] = 0xff;
    }
  }
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
LAB_01c13c9c:
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
  lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_74,1);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x17be8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x17be8), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    local_68 = *(long *)(lVar7 + 0x17bd0) + *(long *)(lVar7 + 0x17bc8) + 4;
    local_70[0] = 10;
    (**(code **)(*param_1 + 0x38))(param_1);
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    local_38 = 1;
    local_34 = 0;
    local_60 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_58 = 0;
    FUN_02906b00(&local_60,param_1,local_70);
    bVar2 = *(byte *)(*(long *)(lVar7 + 0x17bd0) + *(long *)(lVar7 + 0x17bc8) + 0x18);
    uVar5 = 2;
    if (bVar2 < 4) {
      uVar5 = (uint)bVar2;
    }
    *(uint *)(param_1 + 0x1f) = uVar5;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x17be8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x17be8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return;
}

