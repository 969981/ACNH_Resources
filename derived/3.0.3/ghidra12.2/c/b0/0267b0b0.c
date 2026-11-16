
void FUN_0267b0b0(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte local_5c [4];
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_02507c6c(&local_58,2,1,0,0);
  puVar2 = PTR_DAT_04bb4f78;
  if ((byte)local_58 < 8) {
    local_5c[0] = (byte)local_58;
    lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
    do {
      if (lVar9 == param_1) {
        return;
      }
      bVar1 = (byte)local_58;
      uVar3 = local_58 & 0xff;
      if (7 < (byte)local_58 || uVar3 == 7) break;
      pbVar8 = &DAT_0548e169 + uVar3;
      uVar6 = FUN_02507924(&local_58,pbVar8);
      if ((uVar6 & 1) == 0) {
        if (uVar3 == 6) break;
        pbVar8 = &DAT_0548e16a + uVar3;
        uVar6 = FUN_02507924(&local_58,pbVar8);
        if ((uVar6 & 1) == 0) {
          if (uVar3 == 5) break;
          pbVar8 = &DAT_0548e16b + uVar3;
          uVar6 = FUN_02507924(&local_58,pbVar8);
          if ((uVar6 & 1) == 0) {
            if (uVar3 == 4) break;
            pbVar8 = &DAT_0548e16c + uVar3;
            uVar6 = FUN_02507924(&local_58,pbVar8);
            if ((uVar6 & 1) == 0) {
              if (uVar3 == 3) break;
              pbVar8 = &DAT_0548e16d + uVar3;
              uVar6 = FUN_02507924(&local_58,pbVar8);
              if ((uVar6 & 1) == 0) {
                if (uVar3 == 2) break;
                pbVar8 = &DAT_0548e16e + uVar3;
                uVar6 = FUN_02507924(&local_58,pbVar8);
                if ((uVar6 & 1) == 0) {
                  if (uVar3 == 1) break;
                  pbVar8 = &DAT_0548e16f + uVar3;
                  uVar6 = FUN_02507924(&local_58,pbVar8);
                  if ((uVar6 & 1) == 0) {
                    if (bVar1 == 0) break;
                    pbVar8 = &DAT_0548e170 + uVar3;
                    FUN_02507924(&local_58,pbVar8);
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = *pbVar8;
      if (7 < bVar1) break;
      local_58 = CONCAT71(local_58._1_7_,bVar1);
      local_5c[0] = bVar1;
      lVar9 = FUN_025830c0(*(undefined8 *)puVar2,local_5c,1);
    } while( true );
  }
  if (param_1 == 0) {
    return;
  }
  lVar9 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
    lVar7 = *(long *)(lVar9 + 0x98);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x19548);
  }
  if (lVar7 == 0) {
    FUN_027fd5c0(*(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78),param_2);
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar7 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar9 + 0x98) == 0) goto LAB_0267b158;
    plVar4 = *(long **)(*(long *)(lVar9 + 0x98) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_58 = *(ulong *)(lVar9 + 0x78);
    uStack_50 = *(undefined8 *)(lVar9 + 0x80);
    local_48 = 0x17c;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
LAB_0267b158:
  FUN_027fd5c0(*(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78),param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar9 + 0x98) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x98) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

