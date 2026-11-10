
char * FUN_001ef168(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  char *param0;
  undefined *local_f0 [5];
  char *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 auStack_38 [8];
  
  param0 = (char *)(param_1 + 0x23);
  if (*param0 == '\0') {
    FUN_00187810(auStack_38);
    local_68 = 1;
    local_64 = 0;
    puVar1 = PTR_DAT_04bcc018 + 0x10;
    local_70 = puVar1;
    FUN_00196a24(&local_70,8,0);
    FUN_00194e34(auStack_88);
    uVar2 = FUN_00195084(auStack_88);
    local_b8 = 1;
    local_b4 = 0;
    local_c0 = puVar1;
    FUN_00196a24(&local_c0,uVar2,0);
    FUN_00193030(&local_70,auStack_38,8,0xffffffffffffffff);
    FUN_00194e64(auStack_88,&local_70,&local_c0);
    local_c8 = (char *)0x0;
    FUN_001971bc(local_f0,&local_c0);
    FUN_00189050(local_f0,&local_c8);
    local_f0[0] = PTR_DAT_04bc0ec8 + 0x10;
    FUN_0018b1a0(local_f0);
    snprintf(param0,0x29,"--------BOUNDARY--------%s",local_c8);
    *(undefined1 *)(param_1 + 0x4b) = 0;
    FUN_00189128(local_c8);
    FUN_00196ce0(&local_c0);
    FUN_0019302c(auStack_88);
    FUN_00196ce0(&local_70);
    return param0;
  }
  return param0;
}

