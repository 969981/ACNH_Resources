
/* WARNING: Type propagation algorithm not settling */

void FUN_00241f20(undefined8 param_1,long param_2,uint *param_3,int *param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  uint local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_d0;
  undefined4 local_64;
  
  if ((param_3 != (uint *)0x0) && (param_4 != (int *)0x0)) {
    FUN_002436cc(&local_d0);
    FUN_0021f4e0(&local_f0);
    iVar3 = FUN_00243e04(&local_d0);
    FUN_0021f584(&local_f0);
    FUN_00243734(&local_d0);
    if (iVar3 * 0x10 + 0x1e5U <= param_5) {
      uVar4 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
      *param_3 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(param_2 + 0x14) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x14) & 0xff00ff) << 8;
      param_3[1] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(param_2 + 0x20) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x20) & 0xff00ff) << 8;
      param_3[2] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(param_2 + 0x24) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x24) & 0xff00ff) << 8;
      param_3[3] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(param_2 + 0x28) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x28) & 0xff00ff) << 8;
      param_3[4] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(param_2 + 0x2c) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x2c) & 0xff00ff) << 8;
      param_3[5] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(param_2 + 0x30) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x30) & 0xff00ff) << 8;
      param_3[6] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(param_2 + 0x34) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x34) & 0xff00ff) << 8;
      param_3[7] = uVar4 >> 0x10 | uVar4 << 0x10;
      *(ushort *)(param_3 + 8) = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8
      ;
      *(ushort *)((long)param_3 + 0x22) =
           *(ushort *)(param_2 + 0x1a) >> 8 | *(ushort *)(param_2 + 0x1a) << 8;
      *(ushort *)(param_3 + 9) = *(ushort *)(param_2 + 0x1c) >> 8 | *(ushort *)(param_2 + 0x1c) << 8
      ;
      *(undefined1 *)((long)param_3 + 0x26) = *(undefined1 *)(param_2 + 0x38);
      *(undefined1 *)((long)param_3 + 0x27) = *(undefined1 *)(param_2 + 0x39);
      *(ushort *)(param_3 + 10) =
           *(ushort *)(param_2 + 0x3a) >> 8 | *(ushort *)(param_2 + 0x3a) << 8;
      lVar11 = 0;
      do {
        puVar10 = (undefined1 *)(param_2 + 0x5c + lVar11);
        lVar1 = lVar11 + 3;
        *(undefined1 *)((long)param_3 + lVar11 + 0x2a) = *puVar10;
        *(undefined1 *)((long)param_3 + lVar11 + 0x2b) = puVar10[1];
        *(undefined1 *)((long)param_3 + lVar11 + 0x2c) = puVar10[2];
        lVar11 = lVar1;
      } while (lVar1 != 0x180);
      lVar11 = param_2 + 0x1e0;
      uVar4 = (*(uint *)(param_2 + 0x1dc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x1dc) & 0xff00ff) << 8;
      *(uint *)((long)param_3 + 0x1aa) = uVar4 >> 0x10 | uVar4 << 0x10;
      *(undefined1 *)((long)param_3 + 0x1ae) = *(undefined1 *)(param_2 + 0x1e);
      uVar5 = FUN_002b4370(lVar11);
      FUN_0021fc74(&local_d0,uVar5,(long)param_3 + 0x1af,&local_f4,param_5 - 0x1af);
      uVar9 = (ulong)local_f4;
      uVar6 = FUN_002b43ec(lVar11);
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      *(ulong *)((long)param_3 + uVar9 + 0x1af) = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar4 = FUN_002b43f4(lVar11);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      *(uint *)((long)param_3 + uVar9 + 0x1b7) = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = FUN_002b43fc(lVar11);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar6 = 0;
      *(uint *)((long)param_3 + uVar9 + 0x1bb) = uVar4 >> 0x10 | uVar4 << 0x10;
      puVar10 = (undefined1 *)((long)param_3 + uVar9 + 0x1bf);
      do {
        plVar2 = (long *)(param_2 + uVar6 * 0x68 + 0x260);
        if (uVar6 < *(uint *)(param_2 + 0x8e0)) {
          plVar7 = (long *)FUN_002437ec(plVar2);
          local_e8 = 0;
          local_f0 = 0x80000000;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_f0);
          (**(code **)(*plVar2 + 0x18))
                    (&local_f0,plVar2,puVar10,&local_f4,((int)param_3 - (int)puVar10) + param_5);
          puVar10 = puVar10 + local_f4;
        }
        else {
          iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
          if (iVar3 != 0) {
            lVar11 = 0;
            do {
              puVar10[lVar11] = 0;
              uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
              lVar11 = lVar11 + 1;
            } while ((uint)lVar11 < uVar4);
            puVar10 = puVar10 + lVar11;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x10);
      *puVar10 = *(undefined1 *)(param_2 + 0x3c);
      puVar10[1] = *(undefined1 *)(param_2 + 0x3d);
      puVar10[2] = *(undefined1 *)(param_2 + 0x3e);
      puVar10[3] = *(undefined1 *)(param_2 + 0x3f);
      local_f0 = local_f0 & 0xffffffff00000000;
      local_64 = 0;
      puVar10[4] = *(undefined1 *)(param_2 + 0x40);
      puVar10[5] = *(undefined1 *)(param_2 + 0x41);
      puVar10[6] = *(undefined1 *)(param_2 + 0x42);
      puVar10[7] = *(undefined1 *)(param_2 + 0x43);
      puVar10[8] = *(undefined1 *)(param_2 + 0x44);
      puVar10[9] = *(undefined1 *)(param_2 + 0x45);
      puVar10[10] = *(undefined1 *)(param_2 + 0x46);
      puVar10[0xb] = *(undefined1 *)(param_2 + 0x47);
      puVar10[0xc] = *(undefined1 *)(param_2 + 0x48);
      puVar10[0xd] = *(undefined1 *)(param_2 + 0x49);
      puVar10[0xe] = *(undefined1 *)(param_2 + 0x4a);
      puVar10[0xf] = *(undefined1 *)(param_2 + 0x4b);
      puVar10[0x10] = *(undefined1 *)(param_2 + 0x4c);
      puVar10[0x11] = *(undefined1 *)(param_2 + 0x4d);
      puVar10[0x12] = *(undefined1 *)(param_2 + 0x4e);
      puVar10[0x13] = *(undefined1 *)(param_2 + 0x4f);
      puVar10[0x14] = *(undefined1 *)(param_2 + 0x50);
      puVar10[0x15] = *(undefined1 *)(param_2 + 0x51);
      puVar10[0x16] = *(undefined1 *)(param_2 + 0x52);
      puVar10[0x17] = *(undefined1 *)(param_2 + 0x53);
      puVar10[0x18] = *(undefined1 *)(param_2 + 0x54);
      puVar10[0x19] = *(undefined1 *)(param_2 + 0x55);
      puVar10[0x1a] = *(undefined1 *)(param_2 + 0x56);
      puVar10[0x1b] = *(undefined1 *)(param_2 + 0x57);
      puVar10[0x1c] = *(undefined1 *)(param_2 + 0x58);
      puVar10[0x1d] = *(undefined1 *)(param_2 + 0x59);
      puVar10[0x1e] = *(undefined1 *)(param_2 + 0x5a);
      puVar10[0x1f] = *(undefined1 *)(param_2 + 0x5b);
      puVar10[0x20] = *(undefined1 *)(param_2 + 0x3c);
      puVar10[0x21] = *(undefined1 *)(param_2 + 0x3d);
      puVar10[0x22] = *(undefined1 *)(param_2 + 0x3e);
      puVar10[0x23] = *(undefined1 *)(param_2 + 0x3f);
      puVar10[0x24] = *(undefined1 *)(param_2 + 0x40);
      puVar10[0x25] = *(undefined1 *)(param_2 + 0x41);
      puVar10[0x26] = *(undefined1 *)(param_2 + 0x42);
      puVar10[0x27] = *(undefined1 *)(param_2 + 0x43);
      puVar10[0x28] = *(undefined1 *)(param_2 + 0x44);
      puVar10[0x29] = *(undefined1 *)(param_2 + 0x45);
      puVar10[0x2a] = *(undefined1 *)(param_2 + 0x46);
      puVar10[0x2b] = *(undefined1 *)(param_2 + 0x47);
      puVar10[0x2c] = *(undefined1 *)(param_2 + 0x48);
      *param_4 = ((int)puVar10 - (int)param_3) + 0x2d;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_f0 + 4),(Result *)&local_64);
      puVar8 = &local_f0;
      goto LAB_0024238c;
    }
  }
  local_d0._0_4_ = 0x10c07;
  local_f0 = local_f0 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_d0 + 4),(Result *)&local_f0);
  puVar8 = &local_d0;
LAB_0024238c:
  FUN_002296c4(param_1,puVar8);
  return;
}

