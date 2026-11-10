
void FUN_002bc8e0(undefined8 param_1,long param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_44;
  
  uVar1 = (uint)param_3;
  if (param_3 == 0) {
    local_60 = 0x10c07;
    goto LAB_002bca88;
  }
  uVar5 = FUN_002a4940();
  if ((uVar5 & 1) == 0) {
    local_60 = 0x10c0c;
    goto LAB_002bca88;
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    local_60 = 0x10c02;
    goto LAB_002bca88;
  }
  uVar6 = FUN_0021f454();
  puVar7 = (undefined8 *)FUN_00285d10(0x40,uVar6);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    FUN_002236b0();
    puVar7[4] = 0;
    puVar7[3] = 0;
    FUN_002236b0();
    puVar7[6] = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *(undefined4 *)((long)puVar7 + 0x2c) = 0;
    *(undefined8 **)(param_2 + 0x58) = puVar7;
    puVar4 = PTR_DAT_04bc1510;
    uVar2 = uVar1 * (*(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58) - 1) * 0x5c0;
    uVar6 = FUN_0021f454();
    lVar8 = FUN_00285d10((ulong)uVar2,uVar6);
    if (lVar8 == 0 || uVar2 == 0) {
      *(long *)(param_2 + 0x50) = lVar8;
      if (lVar8 == 0) {
        *(undefined8 *)(param_2 + 0x50) = 0;
        if (*(long *)(param_2 + 0x58) != 0) {
          FUN_00285dc0();
        }
        goto LAB_002bca78;
      }
    }
    else {
      uVar5 = 0;
      do {
        *(undefined4 *)(lVar8 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar2 != uVar5);
      *(long *)(param_2 + 0x50) = lVar8;
    }
    iVar3 = *(ushort *)(*(long *)puVar4 + 0x58) - 1;
    if (iVar3 != 0) {
      lVar10 = *(long *)(param_2 + 0x58);
      uVar2 = iVar3 * uVar1;
      uVar5 = (ulong)uVar2;
      lVar9 = 0;
      *(long *)(lVar10 + 0x30) = lVar8;
      *(uint *)(lVar10 + 0x38) = uVar2;
      do {
        puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar9);
        *puVar7 = 0;
        puVar7[1] = 0;
        FUN_002236bc(lVar10 + 0x18,lVar10 + 0x18,(long)puVar7 + (long)*(int *)(lVar10 + 0x2c));
        uVar5 = uVar5 - 1;
        lVar9 = lVar9 + 0x5c0;
      } while (uVar5 != 0);
    }
    if (*(long *)(param_2 + 0x58) != 0) {
      local_60 = 0;
      *(uint *)(PTR_DAT_04bccf00 + 0x104) = (*(ushort *)(*(long *)puVar4 + 0x58) - 1) * uVar1;
      goto LAB_002bca88;
    }
  }
LAB_002bca78:
  local_60 = 0x10c01;
  *(undefined8 *)(param_2 + 0x58) = 0;
LAB_002bca88:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_44);
  FUN_002296c4(param_1,&local_60);
  return;
}

