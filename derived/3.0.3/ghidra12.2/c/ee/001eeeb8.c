
void FUN_001eeeb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *param2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_b0;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined8 uStack_90;
  
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x10))(param_1 + 0x1b8);
  if (*(int *)(param_1 + 8) == 2) {
    FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x2f,0xffffffffffffffff);
    if (*(char *)(param_1 + 0x20) == '\0') {
      lVar3 = FUN_0018c438(param_1 + 0x50);
      if (lVar3 == 0) {
        FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x2728,*(undefined8 *)(param_1 + 0x220));
      }
      else {
        local_a8[0] = 0;
        puVar1 = PTR_DAT_04bc0ec8 + 0x10;
        local_98 = local_a8;
        uStack_90 = 0x10;
        local_b0 = puVar1;
        FUN_0018b070(&local_b0,*(undefined8 *)(param_1 + 0x58),0xffffffffffffffff);
        FUN_00189050(&local_b0,param_1 + 0x178);
        FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x271f,*(undefined8 *)(param_1 + 0x178));
        uVar4 = *(undefined8 *)(param_1 + 400);
        uVar2 = FUN_0018c438(param_1 + 0x50);
        FUN_00174e0c(uVar4,0x3c,uVar2);
        local_b0 = puVar1;
        FUN_0018b1a0(&local_b0);
      }
    }
    else {
      if (*(char *)(param_1 + 0x210) == '\0') {
        uVar2 = FUN_0014e05c(*(undefined8 *)(param_1 + 0x180),"expect:");
        *(undefined8 *)(param_1 + 0x180) = uVar2;
      }
      sprintf((char *)&local_b0,"Content-Length: %u",*(uint *)(param_1 + 0x208));
      uVar2 = FUN_0014e05c(*(undefined8 *)(param_1 + 0x180),&local_b0);
      *(undefined8 *)(param_1 + 0x180) = uVar2;
      param2 = (char *)FUN_001ef168(param_1);
      sprintf((char *)&local_b0,"Content-Type: multipart/form-data; boundary=%s",param2);
      uVar2 = FUN_0014e05c(*(undefined8 *)(param_1 + 0x180),&local_b0);
      *(undefined8 *)(param_1 + 0x180) = uVar2;
      FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x4e2c,PTR_LAB_04bcc820);
      FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x2719,param_1);
      *(undefined1 *)(param_1 + 0x204) = 0;
      *(undefined1 *)(param_1 + 0x203) = *(undefined1 *)(param_1 + 0x204);
    }
  }
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x2727,*(undefined8 *)(param_1 + 0x180));
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x4e6f,PTR_LAB_04bcc828);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x272d,param_1);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x4e2b,PTR_FUN_04bcc818);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x2711,param_1);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x2b,0);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x4e58,DAT_04bcc830);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x2749,param_1);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x4eb4,FUN_001ef2d0);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x27a5,param_1);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),99,1);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x13,1);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x14,0x78);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x4e8c,PTR_LAB_04bcc838);
  FUN_00174e0c(*(undefined8 *)(param_1 + 400),0x277d,param_1);
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x20))(param_1 + 0x1b8);
  return;
}

