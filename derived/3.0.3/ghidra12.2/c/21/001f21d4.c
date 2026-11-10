
bool FUN_001f21d4(int *param_1,long param_2,undefined8 param_3,int param_4,int *param_5)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *local_1c8;
  undefined1 local_1c0 [16];
  undefined1 *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  
  plVar1 = (long *)(param_1 + 0x76);
  (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(plVar1);
  param_1[0x16] = *param_5;
  FUN_00189504(param_1 + 0x18,param_5 + 2);
  FUN_00189504(param_1 + 0x22,param_5 + 0xc);
  FUN_00189504(param_1 + 0x2c,param_5 + 0x16);
  FUN_00189504(param_1 + 0x36,param_5 + 0x20);
  FUN_00189504(param_1 + 0x40,param_5 + 0x2a);
  if (param_1 + 0x16 != param_5) {
    FUN_001a2ac0(param_1 + 0x4a,*(long *)(param_5 + 0x34),*(long *)(param_5 + 0x36),
                 *(long *)(param_5 + 0x36) - *(long *)(param_5 + 0x34));
  }
  param_1[0x50] = param_5[0x3a];
  if (*param_1 == 3) {
    if (*(long *)(param_1 + 0x74) != 0) {
      FUN_00189140(*(long *)(param_1 + 0x74),0xffffffff);
      if (*(long **)(param_1 + 0x74) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x74) + 8))();
      }
      param_1[0x74] = 0;
      param_1[0x75] = 0;
    }
    lVar10 = *(long *)(param_1 + 0x54);
    if (lVar10 != 0) {
      FUN_001f3ee8(lVar10);
      FUN_00185ac4(lVar10);
      param_1[0x54] = 0;
      param_1[0x55] = 0;
    }
    piVar2 = param_1 + 0x56;
    if (*(long *)(param_1 + 0x56) != 0) {
      FUN_001f5330();
      piVar2[0] = 0;
      piVar2[1] = 0;
    }
    lVar10 = *(long *)(param_1 + 0x52);
    if (lVar10 != 0) {
      FUN_001f3d60(lVar10);
      FUN_00185ac4(lVar10);
      param_1[0x52] = 0;
      param_1[0x53] = 0;
    }
    iVar6 = FUN_0018ba4c(param_2,"ws://");
    if ((iVar6 == 0) || (iVar6 = FUN_0018ba4c(param_2,"wss://"), iVar6 == 0)) {
      FUN_001a3cdc(&local_1a0,param_2);
      lVar10 = FUN_001a45e8(&local_1a0);
      uVar7 = FUN_0018b44c(*(undefined8 *)(lVar10 + 0x18),&DAT_040f75a3);
      if ((uVar7 & 1) == 0) {
        lVar10 = FUN_001a45e8(&local_1a0);
        uVar7 = FUN_0018b44c(*(undefined8 *)(lVar10 + 0x18),&DAT_04099730);
        if ((uVar7 & 1) != 0) {
          puVar9 = &DAT_040f72ef;
          goto LAB_001f23d0;
        }
      }
      else {
        puVar9 = &DAT_04094693;
LAB_001f23d0:
        local_1c0[0] = 0;
        puVar3 = PTR_DAT_04bc0ec8 + 0x10;
        local_1b0 = local_1c0;
        uStack_1a8 = 0x10;
        local_1c8 = puVar3;
        FUN_0018b070(&local_1c8,puVar9,0xffffffffffffffff);
        FUN_001a4600(&local_1a0,&local_1c8);
        local_1c8 = puVar3;
        FUN_0018b1a0(&local_1c8);
      }
      FUN_001a4344(&local_1c8,&local_1a0);
      FUN_0018b8f0(param_1 + 2,local_1b0);
      local_1c8 = PTR_DAT_04bc0ec8 + 0x10;
      FUN_0018b1a0(&local_1c8);
      FUN_001a42c4(&local_1a0);
      FUN_00189504(param_1 + 0xc,param_3);
      lVar10 = FUN_00185a6c(0x140);
    }
    else {
      FUN_0018b8f0(param_1 + 2,*(undefined8 *)(param_2 + 0x18));
      FUN_00189504(param_1 + 0xc,param_3);
      lVar10 = FUN_00185a6c(0x140);
    }
    if (lVar10 == 0) {
      bVar5 = false;
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      goto LAB_001f259c;
    }
    FUN_001f3c60(lVar10,0x1000);
    *(long *)(param_1 + 0x52) = lVar10;
    uVar7 = FUN_001f25ec(lVar10,param_5);
    if ((uVar7 & 1) != 0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      iVar6 = FUN_001f5300(piVar2,&local_1a0,param_1);
      bVar5 = iVar6 == 0;
      if (iVar6 == 0) {
        lVar10 = FUN_00185a6c(0x438);
        if (lVar10 != 0) {
          FUN_001f3e98(lVar10,param_3);
        }
        *(long *)(param_1 + 0x54) = lVar10;
        param_1[0x5e] = param_4;
        *param_1 = 1;
        plVar8 = (long *)FUN_00185a6c(0x78);
        if (plVar8 == (long *)0x0) {
          param_1[0x74] = 0;
          param_1[0x75] = 0;
          iVar6 = *(int *)PTR_DAT_04bcbee0;
          lVar10 = 0;
        }
        else {
          local_1c0[0] = 0;
          puVar3 = PTR_DAT_04bc0ec8 + 0x10;
          local_1b0 = local_1c0;
          uStack_1a8 = 0x10;
          local_1c8 = puVar3;
          FUN_0018b070(&local_1c8,"WebSocketClient Connect Thread",0xffffffffffffffff);
          FUN_0018889c(plVar8,&local_1c8,*(undefined4 *)PTR_DAT_04bcbed0);
          puVar4 = PTR_DAT_04bcc8a8;
          plVar8[0xb] = 0;
          plVar8[0xc] = 0;
          plVar8[0xd] = 0;
          *plVar8 = (long)(puVar4 + 0x10);
          *(long **)(param_1 + 0x74) = plVar8;
          local_1c8 = puVar3;
          FUN_0018b1a0(&local_1c8);
          lVar10 = *(long *)(param_1 + 0x74);
          iVar6 = *(int *)PTR_DAT_04bcbee0;
        }
        if (iVar6 != -0x80000000) {
          *(int *)(lVar10 + 0x54) = iVar6;
        }
        puVar3 = PTR_FUN_04bcc8b0;
        *(int **)(lVar10 + 0x68) = param_1;
        *(undefined8 *)(lVar10 + 0x70) = 0;
        *(undefined **)(lVar10 + 0x58) = puVar3;
        *(undefined8 *)(lVar10 + 0x60) = 0;
        FUN_00188cf0(lVar10,0x8000);
      }
      goto LAB_001f259c;
    }
  }
  bVar5 = false;
LAB_001f259c:
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return bVar5;
}

