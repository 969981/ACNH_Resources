
undefined8 FUN_028e3e70(undefined2 *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  
  local_18 = 0x23;
  local_16 = 8;
  local_14 = param_3;
  FUN_020fd3a0(&local_18);
  uVar8 = (ulong)(byte)local_18;
  if ((((uVar8 < 0x23) && (local_18._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar8])) &&
      ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) >> (ulong)(local_18._1_1_ & 0x1f) & 1) != 0)) &&
     (lVar12 = *(long *)PTR_DAT_04bb4138, lVar12 != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar5 = FUN_006bd550(param_2[1],0);
    local_78 = (undefined2)uVar5;
    uStack_76 = (undefined1)((uint)uVar5 >> 0x10);
    uStack_75 = (undefined1)((uint)uVar5 >> 0x18);
    puVar6 = (uint *)FUN_0079e770(lVar12,&local_78);
    puVar4 = PTR_DAT_04bb40b8;
    puVar3 = PTR_DAT_04bb40b0;
    uVar7 = 0;
    if (puVar6 != (uint *)0x0) {
      local_78 = *(undefined2 *)PTR_DAT_04bb37e0;
      uStack_76 = PTR_DAT_04bb37e0[2];
      uStack_75 = PTR_DAT_04bb37e0[3];
      local_5e = *(undefined2 *)(PTR_DAT_04bb37e0 + 2);
      local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
      uStack_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bb40b0;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x50);
            if (-1 < (int)uVar2) {
              if ((undefined2 *)((ulong)uVar2 + (long)puVar6) != (undefined2 *)0x0) {
                local_80 = *(undefined2 *)((ulong)uVar2 + (long)puVar6);
                goto LAB_028e40e8;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          local_80 = 0xfffe;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_028e40e8;
          lVar12 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar6 + (lVar12 - (long)puVar10);
          if (lVar12 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x50) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar11 = (int *)(lVar12 + 4);
          while (piVar11[-1] != -0x78f0e1d7) {
            piVar11 = piVar11 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_028e40e4;
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar4 + 0x50) = iVar1;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_028e40e4:
      local_80 = 0xfffe;
LAB_028e40e8:
      local_7e = 0;
      local_7c = 0;
      local_6c = uStack_74;
      local_68 = local_78;
      local_66 = uStack_76;
      local_65 = uStack_75;
      local_64 = uStack_74;
      local_60 = local_78;
      local_5c = uStack_74;
      local_58 = local_78;
      local_56 = uStack_76;
      local_55 = uStack_75;
      local_54 = uStack_74;
      local_50 = local_78;
      local_4e = uStack_76;
      local_4d = uStack_75;
      local_4c = uStack_74;
      local_48 = local_78;
      local_46 = uStack_76;
      local_45 = uStack_75;
      local_44 = uStack_74;
      local_40 = local_78;
      local_3e = uStack_76;
      local_3d = uStack_75;
      local_3c = uStack_74;
      local_38 = local_78;
      local_36 = uStack_76;
      local_35 = uStack_75;
      local_34 = uStack_74;
      FUN_0277d4ac(&local_80);
      FUN_021e2fb0(&local_78,&local_14,&local_18,&local_80,PTR_DAT_04bb37e0,PTR_DAT_04bb37e0);
      uVar7 = 1;
      *(undefined4 *)(param_1 + 8) = local_70;
      *(undefined4 *)(param_1 + 10) = local_6c;
      *(ulong *)(param_1 + 4) = CONCAT44(uStack_74,CONCAT13(uStack_75,CONCAT12(uStack_76,local_78)))
      ;
      *param_1 = local_60;
      param_1[1] = local_5e;
      *(undefined4 *)(param_1 + 2) = local_5c;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

