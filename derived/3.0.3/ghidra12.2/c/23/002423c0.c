
void FUN_002423c0(undefined8 param_1,long param_2,uint *param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_c8;
  ErrorResultVariant aEStack_c4 [100];
  uint local_58;
  undefined4 local_54;
  
  if (param_3 != (uint *)0x0) {
    FUN_002436cc(&local_c8);
    FUN_0021f4e0(&local_e8);
    iVar3 = FUN_00243e04(&local_c8);
    FUN_0021f584(&local_e8);
    FUN_00243734(&local_c8);
    if (iVar3 * 0x10 + 0x1e5U <= param_4) {
      uVar7 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x10) = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x14) = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x20) = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (param_3[3] & 0xff00ff00) >> 8 | (param_3[3] & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x24) = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (param_3[4] & 0xff00ff00) >> 8 | (param_3[4] & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x28) = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (param_3[5] & 0xff00ff00) >> 8 | (param_3[5] & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x2c) = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (param_3[6] & 0xff00ff00) >> 8 | (param_3[6] & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x30) = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (param_3[7] & 0xff00ff00) >> 8 | (param_3[7] & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x34) = uVar7 >> 0x10 | uVar7 << 0x10;
      *(ushort *)(param_2 + 0x18) = (ushort)param_3[8] >> 8 | (ushort)param_3[8] << 8;
      *(ushort *)(param_2 + 0x1a) =
           *(ushort *)((long)param_3 + 0x22) >> 8 | *(ushort *)((long)param_3 + 0x22) << 8;
      *(ushort *)(param_2 + 0x1c) = (ushort)param_3[9] >> 8 | (ushort)param_3[9] << 8;
      *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)((long)param_3 + 0x26);
      *(undefined1 *)(param_2 + 0x39) = *(undefined1 *)((long)param_3 + 0x27);
      *(ushort *)(param_2 + 0x3a) = (ushort)param_3[10] >> 8 | (ushort)param_3[10] << 8;
      lVar9 = 0;
      do {
        puVar8 = (undefined1 *)(param_2 + 0x5c + lVar9);
        lVar1 = lVar9 + 3;
        *puVar8 = *(undefined1 *)((long)param_3 + lVar9 + 0x2a);
        puVar8[1] = *(undefined1 *)((long)param_3 + lVar9 + 0x2b);
        puVar8[2] = *(undefined1 *)((long)param_3 + lVar9 + 0x2c);
        lVar9 = lVar1;
      } while (lVar1 != 0x180);
      uVar7 = (*(uint *)((long)param_3 + 0x1aa) & 0xff00ff00) >> 8 |
              (*(uint *)((long)param_3 + 0x1aa) & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (0x17f < uVar7) {
        uVar7 = 0x180;
      }
      *(uint *)(param_2 + 0x1dc) = uVar7;
      *(bool *)(param_2 + 0x1e) = *(char *)((long)param_3 + 0x1ae) != '\0';
      FUN_0021f4e0(&local_c8);
      FUN_0021fdbc(&local_e8,&local_c8,(long)param_3 + 0x1af,param_4 - 0x1af,&local_58);
      lVar9 = param_2 + 0x1e0;
      FUN_002b44ec(lVar9,&local_c8);
      FUN_002b455c(lVar9,1);
      uVar5 = (ulong)local_58;
      uVar6 = *(ulong *)((long)param_3 + uVar5 + 0x1af);
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      FUN_002b44fc(lVar9,uVar6 >> 0x20 | uVar6 << 0x20);
      uVar7 = *(uint *)((long)param_3 + uVar5 + 0x1b7);
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      FUN_002b4504(lVar9,uVar7 >> 0x10 | uVar7 << 0x10);
      uVar7 = *(uint *)((long)param_3 + uVar5 + 0x1bb);
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      FUN_002b450c(lVar9,uVar7 >> 0x10 | uVar7 << 0x10);
      lVar9 = 0;
      puVar8 = (undefined1 *)((long)param_3 + uVar5 + 0x1bf);
      *(undefined4 *)(param_2 + 0x8e0) = 0;
      do {
        plVar2 = (long *)(param_2 + 0x260 + lVar9);
        (**(code **)(*plVar2 + 0x20))
                  (&local_e8,plVar2,puVar8,((int)param_3 - (int)puVar8) + param_4);
        uVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
        plVar4 = (long *)FUN_002437ec(plVar2);
        local_e0 = 0;
        local_e8 = 0x80000000;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_e8);
        iVar3 = FUN_002a3904(plVar2);
        if (iVar3 == 0) {
          FUN_002437ec(plVar2);
          iVar3 = FUN_00227cb0();
          if (iVar3 != 0) goto LAB_00242620;
        }
        else {
LAB_00242620:
          *(int *)(param_2 + 0x8e0) = *(int *)(param_2 + 0x8e0) + 1;
        }
        puVar8 = puVar8 + (uVar6 & 0xffffffff);
        lVar9 = lVar9 + 0x68;
        if (lVar9 == 0x680) {
          local_e8 = local_e8 & 0xffffffff00000000;
          local_54 = 0;
          *(undefined1 *)(param_2 + 0x3c) = *puVar8;
          *(undefined1 *)(param_2 + 0x3d) = puVar8[1];
          *(undefined1 *)(param_2 + 0x3e) = puVar8[2];
          *(undefined1 *)(param_2 + 0x3f) = puVar8[3];
          *(undefined1 *)(param_2 + 0x40) = puVar8[4];
          *(undefined1 *)(param_2 + 0x41) = puVar8[5];
          *(undefined1 *)(param_2 + 0x42) = puVar8[6];
          *(undefined1 *)(param_2 + 0x43) = puVar8[7];
          *(undefined1 *)(param_2 + 0x44) = puVar8[8];
          *(undefined1 *)(param_2 + 0x45) = puVar8[9];
          *(undefined1 *)(param_2 + 0x46) = puVar8[10];
          *(undefined1 *)(param_2 + 0x47) = puVar8[0xb];
          *(undefined1 *)(param_2 + 0x48) = puVar8[0xc];
          *(undefined1 *)(param_2 + 0x49) = puVar8[0xd];
          *(undefined1 *)(param_2 + 0x4a) = puVar8[0xe];
          *(undefined1 *)(param_2 + 0x4b) = puVar8[0xf];
          *(undefined1 *)(param_2 + 0x4c) = puVar8[0x10];
          *(undefined1 *)(param_2 + 0x4d) = puVar8[0x11];
          *(undefined1 *)(param_2 + 0x4e) = puVar8[0x12];
          *(undefined1 *)(param_2 + 0x4f) = puVar8[0x13];
          *(undefined1 *)(param_2 + 0x50) = puVar8[0x14];
          *(undefined1 *)(param_2 + 0x51) = puVar8[0x15];
          *(undefined1 *)(param_2 + 0x52) = puVar8[0x16];
          *(undefined1 *)(param_2 + 0x53) = puVar8[0x17];
          *(undefined1 *)(param_2 + 0x54) = puVar8[0x18];
          *(undefined1 *)(param_2 + 0x55) = puVar8[0x19];
          *(undefined1 *)(param_2 + 0x56) = puVar8[0x1a];
          *(undefined1 *)(param_2 + 0x57) = puVar8[0x1b];
          *(undefined1 *)(param_2 + 0x58) = puVar8[0x1c];
          *(undefined1 *)(param_2 + 0x59) = puVar8[0x1d];
          *(undefined1 *)(param_2 + 0x5a) = puVar8[0x1e];
          *(undefined1 *)(param_2 + 0x5b) = puVar8[0x1f];
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((long)&local_e8 + 4),(Result *)&local_54);
          FUN_002296c4(param_1,&local_e8);
          FUN_0021f584(&local_c8);
          return;
        }
      } while( true );
    }
  }
  local_c8 = 0x10c07;
  local_e8 = local_e8 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_c4,(Result *)&local_e8);
  FUN_002296c4(param_1,&local_c8);
  return;
}

