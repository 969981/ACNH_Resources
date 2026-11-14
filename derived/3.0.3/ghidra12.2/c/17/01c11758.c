
void FUN_01c11758(long *param_1,byte *param_2)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 local_80 [2];
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (local_24[0] < 8) goto LAB_01c11868;
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_01c117e0:
    if (*pbVar8 < 8) goto LAB_01c1184c;
LAB_01c117ec:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01c11844:
      pbVar8 = &DAT_0548e168;
      goto LAB_01c1184c;
    }
    lVar9 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_24[0] = *pbVar8;
    if (7 < local_24[0]) goto LAB_01c11844;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01c117e0;
      }
      goto LAB_01c117ec;
    }
LAB_01c1184c:
    local_24[0] = *pbVar8;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_01c11868:
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  if (lVar9 != 0) {
    if ((*(long **)(lVar9 + 0x17f68) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar9 + 0x17f68), puVar6 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar6)();
      uVar5 = uVar5 ^ 1;
    }
    lVar1 = *(long *)(lVar9 + 0x17f50) + *(long *)(lVar9 + 0x17f48);
    local_78 = lVar1 + 4;
    local_80[0] = 10;
    (**(code **)(*param_1 + 0x38))(param_1);
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    local_48 = 1;
    local_44 = 0;
    local_70 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_68 = 0;
    FUN_02906b00(&local_70,param_1,local_80);
    iVar3 = *(int *)(lVar1 + 0x18);
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
    uVar10 = 1;
    if (iVar3 == 1) {
      uVar10 = 2;
    }
    *puVar7 = uVar10;
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x17f68) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x17f68) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return;
}

