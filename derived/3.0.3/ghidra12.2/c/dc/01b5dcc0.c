
void FUN_01b5dcc0(long *param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  byte local_28 [4];
  undefined4 local_24;
  
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_01b5dd38:
    if (7 < *pbVar9) {
LAB_01b5dd44:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar5 = *(byte *)(lVar10 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar2 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar9 = (byte *)(lVar10 + 0x471);
          }
        }
        local_28[0] = *pbVar9;
        if (local_28[0] < 8) goto LAB_01b5ddc4;
      }
      pbVar9 = &DAT_0548e168;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01b5dd38;
      }
      goto LAB_01b5dd44;
    }
  }
  local_28[0] = *pbVar9;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
LAB_01b5ddc4:
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_28,1);
  if (lVar10 != 0) {
    if ((*(long **)(lVar10 + 0x17f68) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar10 + 0x17f68), puVar7 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar7)();
      uVar6 = uVar6 ^ 1;
    }
    lVar3 = *(long *)(lVar10 + 0x17f48);
    lVar4 = *(long *)(lVar10 + 0x17f50);
    lVar1 = DAT_05335028 + 0x238;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_24 = FUN_006bd550(param_1[1],0);
    uVar8 = FUN_01b5b650(lVar1,&local_24);
    FUN_01b5cf20(param_1,uVar8,0,lVar4 + lVar3,0);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar10 + 0x17f68) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x17f68) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

