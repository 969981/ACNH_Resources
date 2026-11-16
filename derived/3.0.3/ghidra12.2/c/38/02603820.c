
undefined8 FUN_02603820(long param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  char cVar10;
  int *piVar11;
  undefined *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_44 [15];
  undefined1 local_35;
  undefined4 local_14;
  
  uVar7 = 0;
  if (param_1 != 0) {
    local_35 = 0;
    local_48 = 0x10;
    local_44[0] = 0;
    local_50 = local_44;
    local_58 = PTR_DAT_04bb2ab0 + 0x10;
    uVar6 = FUN_0376b510(&local_58,*param_2);
    uVar7 = 0;
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)PTR_DAT_04bb4138;
      (**(code **)(local_58 + 0x18))(&local_58);
      local_14 = FUN_006bd550(local_50,0);
      puVar8 = (uint *)FUN_0079e770(uVar7,&local_14);
      if (puVar8 == (uint *)0x0) {
        uVar7 = *(undefined8 *)PTR_DAT_04bb4130;
        (**(code **)(local_58 + 0x18))(&local_58);
        local_14 = FUN_006bd550(local_50,0);
        puVar8 = (uint *)FUN_0079e4d0(uVar7,&local_14);
        if (puVar8 == (uint *)0x0) {
          return 0;
        }
        lVar9 = nn::prepo::Struct::GetBuffer();
        if (lVar9 != 0) {
          nn::prepo::Struct::Add((char *)(param_1 + 8),true);
        }
        puVar5 = PTR_DAT_04bb40a8;
        puVar4 = PTR_DAT_04bb40a0;
        uVar2 = *puVar8;
        if (uVar2 != 0) {
          cVar10 = *PTR_DAT_04bb40a0;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
              uVar2 = *puVar8;
            }
            else if ((-1 < *(int *)(puVar5 + 0x40)) || (*(int *)(puVar5 + 0x40) != -1)) break;
            puVar3 = (uint *)(ulong)uVar2;
            if ((puVar3 == (uint *)0x0) || (puVar8 == puVar3)) break;
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar3)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + (lVar9 - (long)puVar3);
            if (lVar9 == 0) break;
            uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar3));
            *(undefined4 *)(puVar5 + 0x40) = 0xfffffffe;
            if (uVar6 == 0) break;
            piVar11 = (int *)(lVar9 + 4);
            while (piVar11[-1] != 0x54706054) {
              piVar11 = piVar11 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_02603b4c;
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(puVar5 + 0x40) = iVar1;
            uVar2 = *puVar8;
            if (uVar2 == 0) break;
          } while( true );
        }
      }
      else {
        lVar9 = nn::prepo::Struct::GetBuffer();
        if (lVar9 != 0) {
          nn::prepo::Struct::Add((char *)(param_1 + 8),true);
        }
        puVar5 = PTR_DAT_04bb40b8;
        puVar4 = PTR_DAT_04bb40b0;
        uVar2 = *puVar8;
        if (uVar2 != 0) {
          cVar10 = *PTR_DAT_04bb40b0;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
              uVar2 = *puVar8;
            }
            else if ((-1 < *(int *)(puVar5 + 0x58)) || (*(int *)(puVar5 + 0x58) != -1)) break;
            puVar3 = (uint *)(ulong)uVar2;
            if ((puVar3 == (uint *)0x0) || (puVar8 == puVar3)) break;
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar3)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + (lVar9 - (long)puVar3);
            if (lVar9 == 0) break;
            uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar3));
            *(undefined4 *)(puVar5 + 0x58) = 0xfffffffe;
            if (uVar6 == 0) break;
            piVar11 = (int *)(lVar9 + 4);
            while (piVar11[-1] != 0x54706054) {
              piVar11 = piVar11 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_02603b4c;
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(puVar5 + 0x58) = iVar1;
            uVar2 = *puVar8;
            if (uVar2 == 0) break;
          } while( true );
        }
      }
LAB_02603b4c:
      lVar9 = nn::prepo::Struct::GetBuffer();
      if (lVar9 != 0) {
        nn::prepo::Struct::Add((char *)(param_1 + 8),0x40875d8);
      }
      uVar7 = 1;
    }
  }
  return uVar7;
}

