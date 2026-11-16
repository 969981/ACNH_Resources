
uint FUN_02673a50(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 local_74 [4];
  undefined4 local_70;
  byte local_6c [4];
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_02507c6c(&local_68,2,1,0,0);
  puVar2 = PTR_DAT_04bb4f78;
  if ((byte)local_68 < 8) {
    local_6c[0] = (byte)local_68;
    lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
    while (lVar10 != param_1) {
      bVar1 = (byte)local_68;
      uVar5 = local_68 & 0xff;
      if (7 < (byte)local_68 || uVar5 == 7) goto LAB_02673aa0;
      pbVar11 = &DAT_0548e169 + uVar5;
      uVar6 = FUN_02507924(&local_68,pbVar11);
      if ((uVar6 & 1) == 0) {
        if (uVar5 == 6) goto LAB_02673aa0;
        pbVar11 = &DAT_0548e16a + uVar5;
        uVar6 = FUN_02507924(&local_68,pbVar11);
        if ((uVar6 & 1) == 0) {
          if (uVar5 == 5) goto LAB_02673aa0;
          pbVar11 = &DAT_0548e16b + uVar5;
          uVar6 = FUN_02507924(&local_68,pbVar11);
          if ((uVar6 & 1) == 0) {
            if (uVar5 == 4) goto LAB_02673aa0;
            pbVar11 = &DAT_0548e16c + uVar5;
            uVar6 = FUN_02507924(&local_68,pbVar11);
            if ((uVar6 & 1) == 0) {
              if (uVar5 == 3) goto LAB_02673aa0;
              pbVar11 = &DAT_0548e16d + uVar5;
              uVar6 = FUN_02507924(&local_68,pbVar11);
              if ((uVar6 & 1) == 0) {
                if (uVar5 == 2) goto LAB_02673aa0;
                pbVar11 = &DAT_0548e16e + uVar5;
                uVar6 = FUN_02507924(&local_68,pbVar11);
                if ((uVar6 & 1) == 0) {
                  if (uVar5 == 1) goto LAB_02673aa0;
                  pbVar11 = &DAT_0548e16f + uVar5;
                  uVar6 = FUN_02507924(&local_68,pbVar11);
                  if ((uVar6 & 1) == 0) {
                    if (bVar1 == 0) goto LAB_02673aa0;
                    pbVar11 = &DAT_0548e170 + uVar5;
                    FUN_02507924(&local_68,pbVar11);
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = *pbVar11;
      if (7 < bVar1) goto LAB_02673aa0;
      local_68 = CONCAT71(local_68._1_7_,bVar1);
      local_6c[0] = bVar1;
      lVar10 = FUN_025830c0(*(undefined8 *)puVar2,local_6c,1);
    }
  }
  else {
LAB_02673aa0:
    puVar2 = PTR_DAT_04bb43c0;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_2);
    if (*(long *)puVar2 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar3 < *(uint *)(lVar10 + 0x1d8)) {
        uVar4 = 0;
        if ((param_1 == 0) || (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0))
        goto LAB_02673cb0;
        local_70 = 0xffffffff;
        local_74[0] = 0xff;
        lVar10 = param_1 + 0x194b0;
        if (*(long *)(param_1 + 0x194b8) == 0) {
          lVar10 = *(long *)(DAT_05574040 + 0x20);
        }
        lVar9 = *(long *)(lVar10 + 0x98);
        if (lVar9 == 0) {
          uVar5 = 0;
        }
        else {
          if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            lVar9 = *(long *)(lVar10 + 0x98);
            uVar5 = uVar5 & 0xffffffff;
            if (lVar9 == 0) goto LAB_02673d04;
          }
          plVar7 = *(long **)(lVar9 + 0x20);
          if (plVar7 != (long *)0x0) {
            local_68 = *(ulong *)(lVar10 + 0x78);
            uStack_60 = *(undefined8 *)(lVar10 + 0x80);
            local_58 = 0x17c;
            (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
          }
        }
LAB_02673d04:
        uVar4 = FUN_027faa50(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x78),param_2,local_74,
                             &local_70,param_4);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar10 + 0x98) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x98) + 0x18), puVar8 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar8)();
        }
        if ((uVar4 & 1) != 0) {
          lVar10 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(param_2);
          if (*(long *)puVar2 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              FUN_02649bf0(param_1,param_2,0);
            }
          }
          if (param_3 == 2) {
            FUN_02674040(param_1,local_70,local_74[0]);
          }
          else if (param_3 == 1) {
            FUN_02673de0(param_1,local_70,param_2);
          }
          FUN_02674420(param_1);
        }
        goto LAB_02673cb0;
      }
    }
  }
  uVar4 = 0;
LAB_02673cb0:
  return uVar4 & 1;
}

