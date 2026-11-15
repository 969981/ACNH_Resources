
void FUN_01fa16d0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *__src;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4 [127];
  undefined1 local_155;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined8 local_148;
  ulong local_140 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  int iStack_120;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [31];
  undefined1 local_dd;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_7d;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined8 local_70;
  
  lVar6 = *(long *)(param_1[1] + 0x60);
  if (lVar6 != 0) {
    local_208 = 0;
    local_155 = 0;
    local_204 = 0x3f800000;
    local_218 = 0xffffffff00000000;
    uStack_210 = 0;
    local_1d8 = 0x80;
    puStack_1e0 = local_1d4;
    local_1d4[0] = 0;
    local_14c = *(undefined1 *)(param_1[1] + 0x224);
    puVar1 = PTR_DAT_04bb2d88 + 0x10;
    local_150 = 7;
    local_148 = 0;
    local_14b = 0;
    local_1fc = 0;
    local_1f4 = 0;
    local_140[0] = local_140[0] & 0xffffffff00000000;
    local_1e8 = puVar1;
    FUN_02017350(lVar6,param_2 + 8,local_140);
    local_140[0] = local_140[0] & 0xffffffff00000000;
    FUN_02015a90(lVar6,param_2 + 0x20,local_140);
    local_140[0] = local_140[0] & 0xffffffff00000000;
    FUN_02016ab0(lVar6,param_2,local_140);
    local_7d = 0;
    local_130._4_4_ = 0x3f800000;
    uStack_128._0_4_ = 0;
    puStack_108 = local_fc;
    local_78 = 7;
    local_70 = 0;
    local_73 = 0;
    local_100 = 0x80;
    local_21c = 0;
    local_130._0_4_ = 0;
    local_fc[0] = 0;
    uStack_128._4_4_ = 0;
    iStack_120 = 0;
    local_11c = 0;
    local_74 = *(undefined1 *)(*(long *)(lVar6 + 0x48) + 0x224);
    local_140[0] = 0xffffffff00000000;
    local_140[1] = 0;
    *(undefined2 *)(lVar6 + 0x60e4) = *(undefined2 *)(param_2 + 0x30);
    *(undefined1 *)(lVar6 + 0x60e6) = *(undefined1 *)(param_2 + 0x32);
    *(undefined1 *)(lVar6 + 0x60e7) = *(undefined1 *)(param_2 + 0x33);
    *(undefined4 *)(lVar6 + 0x60e8) = *(undefined4 *)(param_2 + 0x34);
    local_110 = puVar1;
    FUN_017327f0(*(undefined8 *)(lVar6 + 0x60b8),(undefined2 *)(param_2 + 0x30),&local_21c,local_140
                 ,0xffffffff);
    local_140[0] = local_140[0] & 0xffffffff00000000;
    FUN_02015670(lVar6,param_2 + 0x18,local_140);
    puVar4 = PTR_DAT_04bb37e0;
    puVar1 = PTR_PTR_04bb2238;
    if ((int)param_1[0x15f1] != 0) {
      local_dd = 0;
      local_140[0] = *(ulong *)PTR_DAT_04bb37e0;
      iStack_120 = 0x40;
      local_130 = PTR_DAT_04bb2f70 + 0x10;
      local_140[1] = 0;
      uStack_128 = &local_11c;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      __src = *(undefined8 **)(puVar1 + 8);
      if (&local_11c != __src) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
        lVar6 = 0;
        do {
          if (*(char *)(*(long *)(puVar1 + 8) + lVar6) == '\0') goto LAB_01fa190c;
          lVar2 = *(long *)(puVar1 + 8) + lVar6;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_01fa190c;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_01fa190c;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_01fa190c:
        iVar3 = (int)lVar6;
        if (iStack_120 <= (int)lVar6) {
          iVar3 = iStack_120 + -1;
        }
        memcpy(&local_11c,__src,(long)iVar3);
        *(undefined1 *)((long)&local_11c + (long)iVar3) = 0;
      }
      local_d0 = 0;
      local_130 = PTR_DAT_04bb2bc0 + 0x10;
      local_d8 = *(undefined4 *)puVar4;
      local_d4 = *(undefined4 *)(puVar4 + 4);
      if (*(int *)(param_1[1] + 0x750) == 0) {
        uVar5 = (**(code **)(*param_1 + 0x608))(param_1);
        if (((uVar5 & 1) == 0) && ((*(byte *)(param_1 + 0x15f6) >> 5 & 1) == 0)) {
          uVar5 = FUN_01fc1450(param_1,local_140,param_2);
          if ((uVar5 & 1) != 0) {
            FUN_01fa19e0(param_1,local_140,0);
            return;
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x538))(param_1);
  }
  return;
}

