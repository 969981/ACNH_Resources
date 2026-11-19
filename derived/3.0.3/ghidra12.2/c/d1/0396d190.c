
void FUN_0396d190(long param_1,undefined8 param_2,long *param_3,uint param_4,undefined4 param_5,
                 uint param_6,int param_7)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long *local_88;
  byte local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  uVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  if (0 < (int)uVar6) {
    uVar15 = 0;
    puVar1 = (uint *)(param_1 + 0xbc8);
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((param_4 & 1) == 0) {
        uVar8 = (**(code **)(*param_3 + 0x78))(param_3,uVar15);
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        uVar8 = 0;
      }
      uVar9 = (**(code **)(*param_3 + 0x80))(param_3,uVar15);
      uVar10 = 4;
      if ((uVar9 & 1) == 0) {
        uVar10 = 2;
      }
      if (((uVar8 & 1) == 0) && ((uVar10 & param_4) != 0)) {
        iVar7 = -1;
        if ((param_6 & 1) != 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x678);
          local_c0 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
          local_c8 = puVar2;
          (**(code **)(*param_3 + 0x28))(auStack_70,param_3,uVar15);
          iVar7 = FUN_0396f9a0(uVar12,param_2,&local_c8,auStack_70,uVar15 + param_7);
        }
        local_c0 = CONCAT71(local_c0._1_7_,*(undefined1 *)(param_1 + 8));
        uStack_b0 = 0;
        local_a0 = *(undefined4 *)((long)param_3 + 0x94);
        if ((((*(ushort *)((long)param_3 + 0x8a) & 0x21) == 0) ||
            ((*(ushort *)((long)param_3 + 0x8a) >> 1 & 1) == 0)) ||
           (lVar11 = param_3[0x3f], lVar11 == 0)) {
          local_98 = &DAT_05ae9148;
          if ((undefined8 *)param_3[0xf] != (undefined8 *)0x0) {
            local_98 = (undefined8 *)param_3[0xf];
          }
          local_90 = &DAT_05ae91b0;
          if ((undefined8 *)param_3[0x10] != (undefined8 *)0x0) {
            local_90 = (undefined8 *)param_3[0x10];
          }
        }
        else {
          local_98 = (undefined8 *)(lVar11 + 8);
          local_90 = *(undefined8 **)(lVar11 + 0x100);
        }
        lVar11 = param_3[0x17];
        local_c8 = (undefined *)CONCAT44(param_5,uVar15);
        local_80 = (*(ushort *)(param_3 + 0x11) & 4) == 0 & (byte)(*(uint *)(param_1 + 0x6b0) >> 3);
        uVar10 = uVar15;
        if (*(uint *)(param_3 + 0x16) <= uVar15) {
          uVar10 = 0;
        }
        local_b8 = param_1 + 0x10;
        local_a8 = param_3;
        local_88 = param_3 + 10;
        local_78 = param_2;
        if ((*(byte *)(lVar11 + (ulong)uVar10 * 0x820 + 0x818) & 1) != 0) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_c8);
          lVar11 = lVar11 + (ulong)uVar10 * 0x820;
          iVar3 = *(int *)(lVar11 + 8);
          if (iVar3 != 0) {
            plVar14 = *(long **)(lVar11 + 0x10);
            lVar11 = (long)iVar3 << 3;
            do {
              lVar13 = *plVar14;
              (**(code **)(*param_3 + 0x58))(param_3,&local_c8,lVar13);
              if ((*(byte *)(lVar13 + 0x38) & 1) != 0) {
                (*(code *)**(undefined8 **)(lVar13 + 0x3c))((undefined8 *)(lVar13 + 0x3c),&local_c8)
                ;
              }
              (**(code **)(*param_3 + 0x60))(param_3,&local_c8,lVar13);
              plVar14 = plVar14 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
          (**(code **)(*param_3 + 0x68))(param_3,&local_c8);
        }
        if ((iVar7 != -1) &&
           (lVar11 = FUN_0396fb50(*(undefined8 *)(param_1 + 0x678),iVar7),
           (*(byte *)(lVar11 + 600) & 1) != 0)) {
          if (*(uint *)(param_3 + 0x18) < *(uint *)(lVar11 + 0x24)) {
            *(uint *)(param_3 + 0x18) = *(uint *)(lVar11 + 0x24);
          }
          *(long **)(lVar11 + 0x260) = param_3;
          if ((*(ushort *)(param_3 + 0x11) >> 10 & 1) != 0) {
            do {
              uVar10 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            *(long *)(*(long *)(param_1 + 0xbd0) +
                     (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3)) = lVar11;
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar6);
  }
  return;
}

