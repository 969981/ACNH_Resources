
void FUN_002abaa0(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  int local_50 [4];
  
  uVar2 = 0;
  if (*(byte *)(param_2 + 0x1a) + 0x20 <= *(uint *)(param_2 + 0x5f8)) {
    uVar2 = (*(uint *)(param_2 + 0x5f8) - (uint)*(byte *)(param_2 + 0x1a)) - 0x20;
  }
  if (param_3 < uVar2) {
    pcVar5 = (char *)FUN_0022b6c4(param_2,param_3);
    if (*pcVar5 == -1) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 7) = 0;
    uVar6 = FUN_0022b6c4(param_2,param_3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 5);
    puVar1 = param_1 + 4;
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0x2c);
    param_1[3] = param_1[6];
    FUN_002abcbc(local_50,puVar1,uVar6,0x10);
    if (local_50[0] == 0) {
      uStack_70 = param_1[2];
      local_68 = param_1[3];
      local_78 = PTR_DAT_04bce0d0 + 0x10;
      FUN_002abd6c(auStack_60,puVar1,&local_78);
      FUN_00229780(local_50,auStack_60);
      if (local_50[0] == 0) {
        if (*(char *)(param_2 + 0x658) != '\0') {
          bVar3 = *(byte *)(param_1 + 5);
          iVar4 = 1;
          if ((bVar3 & 1) != 0) {
            iVar4 = 2;
          }
          if ((bVar3 & 2) != 0) {
            iVar4 = iVar4 + 2;
          }
          if ((bVar3 & 4) != 0) {
            iVar4 = iVar4 + 4;
          }
          if ((bVar3 & 8) != 0) {
            iVar4 = iVar4 + 8;
          }
          if ((iVar4 + param_3 <= uVar2) &&
             (iVar4 = FUN_002abdf8(puVar1),
             iVar4 + param_3 + *(ushort *)((long)param_1 + 0x2a) <= uVar2)) {
            *param_1 = uVar6;
            if ((*(byte *)((long)param_1 + 0x29) >> 3 & 1) == 0) {
              FUN_00227418(param_1 + 8,param_2 + 0x630);
              uVar7 = *(undefined1 *)(param_2 + 0x628);
            }
            else {
              FUN_00227284(param_1 + 8);
              uVar7 = 0;
            }
            *(undefined1 *)((long)param_1 + 0x6c) = uVar7;
            *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x5fc);
            *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x14);
            *(bool *)((long)param_1 + 0x74) =
                 *(int *)(param_2 + 0x10) == 0 && *(char *)(param_2 + 0x1a) == '\0';
            return;
          }
        }
        *param_1 = 0;
        return;
      }
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}

