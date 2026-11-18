
void FUN_03602e00(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *(undefined1 *)(param_1 + 8) = 1;
  memcpy((void *)(param_1 + 0x58),param_2,0xe2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_DAT_04bdf328;
  if (*(char *)(param_1 + 0x138) != '\0') {
    uVar4 = (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                      (*(long **)PTR_DAT_04bdf328,0x4140,0x40);
    FUN_03612504();
    *(undefined8 *)(param_1 + 0x140) = uVar4;
    puVar2 = PTR_DAT_04bdf348;
    local_80 = param_2[10];
    local_78 = param_2[0xb];
    local_70 = param_2[0xc];
    local_68 = param_2[0xd];
    local_a0 = param_2[6];
    local_98 = param_2[7];
    local_90 = param_2[8];
    local_88 = param_2[9];
    local_c0 = param_2[2];
    local_b8 = param_2[3];
    local_b0 = param_2[4];
    local_a8 = param_2[5];
    local_d0 = (undefined *)*param_2;
    uStack_c8 = param_2[1];
    FUN_0361287c(uVar4,0,*(undefined8 *)PTR_DAT_04bdf348,&local_d0);
    *(long *)(*(long *)(param_1 + 0x140) + 0x2640) = param_1;
    if (1 < *(byte *)(param_1 + 0x138)) {
      lVar6 = 0x29;
      lVar8 = 0x70;
      do {
        uVar4 = (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,0x4140,0x40);
        FUN_03612504();
        lVar7 = lVar6 * 8;
        *(undefined8 *)(param_1 + lVar7) = uVar4;
        uVar4 = *(undefined8 *)puVar2;
        local_80 = *(undefined8 *)((long)param_2 + lVar8 + 0x50);
        local_78 = *(undefined8 *)((long)param_2 + lVar8 + 0x58);
        local_70 = *(undefined8 *)((long)param_2 + lVar8 + 0x60);
        local_68 = *(undefined8 *)((long)param_2 + lVar8 + 0x68);
        local_a0 = *(undefined8 *)((long)param_2 + lVar8 + 0x30);
        local_98 = *(undefined8 *)((long)param_2 + lVar8 + 0x38);
        local_90 = *(undefined8 *)((long)param_2 + lVar8 + 0x40);
        local_88 = *(undefined8 *)((long)param_2 + lVar8 + 0x48);
        local_b0 = *(undefined8 *)((long)param_2 + lVar8 + 0x20);
        local_a8 = *(undefined8 *)((long)param_2 + lVar8 + 0x28);
        local_c0 = *(undefined8 *)((long)param_2 + lVar8 + 0x10);
        local_b8 = *(undefined8 *)((long)param_2 + lVar8 + 0x18);
        uStack_c8 = *(undefined8 *)((long)param_2 + lVar8 + 8);
        *(undefined8 *)(param_1 + 0x158) = *param_2;
        local_d0 = (undefined *)(param_1 + 0x150);
        FUN_0361287c(*(undefined8 *)(param_1 + lVar7),lVar6 + -0x28,uVar4,&local_d0);
        uVar5 = lVar6 - 0x27;
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0x70;
        *(long *)(*(long *)(param_1 + lVar7) + 0x2640) = param_1;
      } while (uVar5 < *(byte *)(param_1 + 0x138));
      if ((1 < *(byte *)(param_1 + 0x138)) && (*(char *)(param_1 + 0x139) != '\0')) {
        local_b8 = param_2[0x18];
        local_d0 = &DAT_040e671a;
        uStack_c8 = 0;
        local_c0 = CONCAT44(0x7fffffff,*(undefined4 *)(param_2 + 0x19));
        iVar3 = FUN_04002aec(param_1 + 0x9d0,&LAB_03603080,param_1,&local_d0,0);
        if (iVar3 != 0) {
          FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        }
        *(undefined4 *)(param_1 + 0xc44) = 0;
        nn::os::StartThread((ThreadType *)(param_1 + 0xa18));
        *(undefined4 *)(param_1 + 0xc30) = 2;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x178) = 1;
  memset((void *)(param_1 + 0x180),0,0x81c);
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  *(undefined8 *)(param_1 + 0x9b0) = 0;
  *(undefined4 *)(param_1 + 0x9b8) = 0xcb70;
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  *(undefined1 *)(param_1 + 0x9c0) = 0;
  *(undefined8 *)(param_1 + 0xc78) = 0;
  return;
}

