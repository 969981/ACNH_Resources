
uint FUN_019705ec(undefined8 param_1,undefined1 *param_2,undefined8 *param_3,float *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  byte local_58;
  undefined1 auStack_50 [16];
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  local_60._0_4_ = 0;
  local_68 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_60._4_4_ = *(undefined4 *)(puVar12 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = (int)((float)(int)*param_4 / 5.0) - (uint)(*param_4 < 0.0);
  iStack_74 = (int)((float)(int)param_4[2] / 5.0) - (uint)(param_4[2] < 0.0);
  puVar7 = (undefined2 *)FUN_01a5190c(&local_68,0,&local_80,0);
  lVar3 = DAT_05150358;
  local_28 = *puVar7;
  local_26 = *(undefined1 *)(puVar7 + 1);
  local_25 = *(undefined1 *)((long)puVar7 + 3);
  local_24 = *(undefined4 *)(puVar7 + 2);
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar5 = FUN_0277d6c4(&local_28);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(&local_80,&local_28);
      iVar4 = FUN_0123db50(&local_78,local_70);
      if (iVar4 == 0x2e) {
        puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar6 = puVar8[3];
        uVar5 = *puVar8 ^ *puVar8 << 0xb;
        *puVar8 = puVar8[1];
        puVar8[1] = puVar8[2];
        uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
        puVar8[2] = uVar6;
        puVar8[3] = uVar5;
        uVar6 = FUN_0122c1e0(param_4,&local_68,(long)&local_60 + 4,auStack_50);
        if ((uVar6 & 1) == 0) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 0;
          }
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = 0;
            *(undefined4 *)(param_3 + 1) = 0;
          }
        }
        else {
          uVar9 = (ulong)uVar5 + (ulong)uVar5 * 2;
          uVar10 = uVar9 >> 0x20;
          uVar11 = *(undefined8 *)((long)&local_60 + (uVar10 * 3 + -2) * 4);
          uVar2 = *(undefined4 *)((long)&local_60 + uVar10 * 0xc);
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = (char)(uVar9 >> 0x20);
          }
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = uVar11;
            *(undefined4 *)(param_3 + 1) = uVar2;
          }
        }
        goto LAB_01970924;
      }
      uVar9 = FUN_01a1d000(&local_80);
      if ((uVar9 & 1) == 0) {
        local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
        uVar9 = FUN_01970940(uVar9,&local_68,iVar4);
        uVar6 = 0;
        if ((uVar9 & 1) == 0) goto LAB_01970924;
        uVar9 = FUN_0196ffcc(0,param_3,param_4,(ulong)local_68 & 0xff);
        if ((uVar9 & 1) == 0) goto LAB_01970920;
        if (param_2 != (undefined1 *)0x0) {
          uVar5 = (uint)(byte)local_68;
          goto LAB_01970914;
        }
      }
      else {
        puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar6 = *puVar8 ^ *puVar8 << 0xb;
        uVar1 = puVar8[3];
        *puVar8 = puVar8[1];
        puVar8[1] = puVar8[2];
        uVar5 = uVar6 ^ uVar1;
        puVar8[2] = uVar1;
        puVar8[3] = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar5;
        uVar5 = uVar5 >> 0x1e;
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = *(undefined8 *)(&DAT_041774b0 + (ulong)uVar5 * 0xc);
          *(undefined4 *)(param_3 + 1) = *(undefined4 *)(&DAT_041774b8 + (ulong)uVar5 * 0xc);
        }
        if (param_2 != (undefined1 *)0x0) {
LAB_01970914:
          *param_2 = (char)uVar5;
        }
      }
      uVar6 = 1;
      goto LAB_01970924;
    }
  }
LAB_01970920:
  uVar6 = 0;
LAB_01970924:
  return uVar6 & 1;
}

