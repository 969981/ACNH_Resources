
undefined8 FUN_03735a3c(long param_1,undefined2 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_62 [2];
  undefined **local_60;
  undefined8 local_58;
  undefined4 local_50;
  char local_4c [8];
  undefined2 local_44;
  undefined1 local_3d;
  int local_34;
  
  uVar1 = FUN_03722560(param_1,param_3 + 0x3e0);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < *(uint *)(param_1 + 0xe0)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar1 * 8);
    }
    else {
      lVar2 = 0;
    }
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_3 + 0x230);
    if (*(int *)(param_3 + 0x500) == 2) {
      if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar1 * 8) + 0x114) >> 1 & 1
          ) != 0) {
        *param_2 = *(undefined2 *)(lVar2 + 0x88);
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar2 + 0x8a);
        *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(lVar2 + 0x8b);
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar2 + 0x8c);
        param_2[4] = *(undefined2 *)(lVar2 + 0x90);
        *(undefined1 *)(param_2 + 5) = *(undefined1 *)(lVar2 + 0x92);
        *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)(lVar2 + 0x93);
        *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar2 + 0x94);
        param_2[8] = *(undefined2 *)(lVar2 + 0x98);
        *(undefined1 *)(param_2 + 9) = *(undefined1 *)(lVar2 + 0x9a);
        *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)(lVar2 + 0x9b);
        *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar2 + 0x9c);
        param_2[0xc] = *(undefined2 *)(lVar2 + 0xa0);
        *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(lVar2 + 0xa2);
        *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)(lVar2 + 0xa3);
        *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar2 + 0xa4);
        param_2[0x10] = *(undefined2 *)(lVar2 + 0xa8);
        *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(lVar2 + 0xaa);
        *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)(lVar2 + 0xab);
        *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(lVar2 + 0xac);
        param_2[0x14] = *(undefined2 *)(lVar2 + 0xb0);
        *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(lVar2 + 0xb2);
        *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(lVar2 + 0xb3);
        *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar2 + 0xb4);
        param_2[0x18] = *(undefined2 *)(lVar2 + 0xb8);
        *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(lVar2 + 0xba);
        *(undefined1 *)((long)param_2 + 0x33) = *(undefined1 *)(lVar2 + 0xbb);
        *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(lVar2 + 0xbc);
        param_2[0x1c] = *(undefined2 *)(lVar2 + 0xc0);
        *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(lVar2 + 0xc2);
        *(undefined1 *)((long)param_2 + 0x3b) = *(undefined1 *)(lVar2 + 0xc3);
        *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar2 + 0xc4);
        param_2[0x20] = *(undefined2 *)(lVar2 + 200);
        *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(lVar2 + 0xca);
        *(undefined1 *)((long)param_2 + 0x43) = *(undefined1 *)(lVar2 + 0xcb);
        *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(lVar2 + 0xcc);
        return 1;
      }
      if ((*(ushort *)(lVar2 + 0x114) >> 1 & 1) == 0) {
        if (((*(ushort *)(lVar2 + 0x114) & 1) == 0) ||
           (((byte)(&DAT_00001230)[param_1] >> 6 & 1) != 0)) {
          if (*(long *)(param_3 + 0x298) != 0) {
            FUN_0233e334(*(long *)(param_3 + 0x298),param_2,0);
          }
        }
        else {
          local_34 = FUN_0252cb54();
          if ((((local_34 != 0) &&
               (FUN_0372af2c(&local_60,&local_34), local_60 != (undefined **)0x0)) &&
              ((char)local_58 != '\0')) &&
             (((local_58._1_1_ != '\0' && (local_58._2_1_ != '\0')) &&
              (local_60[0x53] != (undefined *)0x0)))) {
            FUN_0233e334(local_60[0x53],param_2,1);
          }
          FUN_0372afd0(param_1,param_2);
          FUN_0371f800(param_1 + 0x1188,param_2);
          FUN_0371f800(param_1 + 0x11d0,param_1 + 0x1188);
          *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) | 0x40;
        }
        local_3d = 0;
        local_50 = 0x10;
        local_44 = 0x72;
        local_4c[0] = s_NpcPlayer_040bf633[0];
        local_4c[1] = s_NpcPlayer_040bf633[1];
        local_4c[2] = s_NpcPlayer_040bf633[2];
        local_4c[3] = s_NpcPlayer_040bf633[3];
        local_4c[4] = s_NpcPlayer_040bf633[4];
        local_4c[5] = s_NpcPlayer_040bf633[5];
        local_4c[6] = s_NpcPlayer_040bf633[6];
        local_4c[7] = s_NpcPlayer_040bf633[7];
        local_58 = local_4c;
        local_60 = &PTR_LAB_048fb098;
        FUN_03719b70(&local_34,&local_60,1);
        FUN_03719b70(auStack_62,&local_60,0);
        FUN_02128ca0(&local_34,param_2 + 0xc);
        FUN_02128ca0(auStack_62,param_2);
        FUN_0373424c(param_1,param_2,uVar1);
        FUN_03734854(param_1,param_2,uVar1);
      }
    }
  }
  return 0;
}

