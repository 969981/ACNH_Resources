
void FUN_00b68480(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined2 uStack_70;
  undefined6 local_6e;
  undefined2 uStack_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  if (param_2 == 2) {
    if ((DAT_05574040 != 0) &&
       (lVar5 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar5 != 0)
       ) {
      plVar6 = (long *)(lVar5 + 0x276d60);
      lVar10 = *(long *)(lVar5 + 0x276d80);
      if ((lVar10 == 0) || (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        lVar10 = *(long *)(lVar5 + 0x276d80);
        uVar3 = uVar3 ^ 1;
      }
      local_66 = 0;
      local_60 = 0;
      local_5c = 0;
      local_80 = 0;
      local_64 = 0x101;
      local_88 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      local_78 = 0;
      uStack_70 = 0;
      local_6e = 0x1010000;
      if ((lVar10 != 0) && (plVar7 = *(long **)(lVar10 + 0x20), plVar7 != (long *)0x0)) {
        local_58 = *plVar6;
        local_50 = *(long *)(lVar5 + 0x276d68);
        local_48 = 0x1f2e0;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
        lVar10 = *(long *)(lVar5 + 0x276d80);
      }
      local_5e = 0;
      lVar12 = *(long *)(lVar5 + 0x276d68) + *plVar6;
      local_6e = (undefined6)*(undefined8 *)(lVar12 + 0x1f2d2);
      uStack_68 = (undefined2)((ulong)*(undefined8 *)(lVar12 + 0x1f2d2) >> 0x30);
      if ((lVar10 != 0) && (plVar7 = *(long **)(lVar10 + 0x20), plVar7 != (long *)0x0)) {
        local_48 = 0x1f2e0;
        local_58 = *plVar6;
        local_50 = *(long *)(lVar5 + 0x276d68);
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
        lVar12 = *(long *)(lVar5 + 0x276d68) + *plVar6;
      }
      puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar2 = puVar4[3];
      uVar1 = *puVar4 ^ *puVar4 << 0xb;
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      puVar4[2] = uVar2;
      puVar4[3] = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      uVar8 = (**(code **)(*param_1 + 0x38))(param_1,lVar12,&local_88);
      if ((uVar8 & 1) == 0) {
        puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar2 = puVar4[3];
        uVar1 = *puVar4 ^ *puVar4 << 0xb;
        *puVar4 = puVar4[1];
        puVar4[1] = puVar4[2];
        puVar4[2] = uVar2;
        puVar4[3] = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        lVar10 = (**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)PTR_DAT_04bc0580,3);
        plVar6 = DAT_0532d278;
        if (lVar10 != 0) {
          plVar7 = (long *)(*(int *)((long)DAT_0532d278 + 0x2c) + lVar10);
          plVar11 = DAT_0532d278 + 3;
          lVar10 = *plVar11;
          *plVar11 = (long)plVar7;
          *plVar7 = lVar10;
          plVar7[1] = (long)plVar11;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 8) = plVar7;
          }
          *(int *)(plVar6 + 5) = (int)plVar6[5] + 1;
        }
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x276d80) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0x276d80) + 0x18), puVar9 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar9)();
      }
    }
  }
  else if (param_2 == 1) {
    puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar1 = puVar4[3];
    uVar3 = *puVar4 ^ *puVar4 << 0xb;
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    puVar4[2] = uVar1;
    puVar4[3] = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1;
    plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)PTR_DAT_04bc0580,2);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b68614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
  }
  else if (param_2 == 0) {
    puVar4 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar1 = puVar4[3];
    uVar3 = *puVar4 ^ *puVar4 << 0xb;
    *puVar4 = puVar4[1];
    puVar4[1] = puVar4[2];
    puVar4[2] = uVar1;
    puVar4[3] = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1;
    lVar5 = (**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)PTR_DAT_04bc0580,1);
    plVar6 = DAT_0532d278;
    if (lVar5 != 0) {
      lVar10 = *DAT_0532d278;
      plVar7 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar5);
      *DAT_0532d278 = (long)plVar7;
      *plVar7 = lVar10;
      plVar7[1] = (long)plVar6;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar7;
      }
      *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
    }
  }
  return;
}

