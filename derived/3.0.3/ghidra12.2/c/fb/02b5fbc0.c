
/* WARNING: Removing unreachable block (ram,0x02b6006c) */
/* WARNING: Removing unreachable block (ram,0x02b6002c) */
/* WARNING: Removing unreachable block (ram,0x02b5ffec) */
/* WARNING: Removing unreachable block (ram,0x02b5ff7c) */
/* WARNING: Removing unreachable block (ram,0x02b5ff3c) */
/* WARNING: Removing unreachable block (ram,0x02b5fefc) */
/* WARNING: Removing unreachable block (ram,0x02b5fe8c) */
/* WARNING: Removing unreachable block (ram,0x02b5fe4c) */
/* WARNING: Removing unreachable block (ram,0x02b5fe0c) */
/* WARNING: Removing unreachable block (ram,0x02b5fd9c) */
/* WARNING: Removing unreachable block (ram,0x02b5fd5c) */
/* WARNING: Removing unreachable block (ram,0x02b5fd1c) */
/* WARNING: Removing unreachable block (ram,0x02b5fcac) */
/* WARNING: Removing unreachable block (ram,0x02b5fc60) */
/* WARNING: Removing unreachable block (ram,0x02b5fc0c) */
/* WARNING: Removing unreachable block (ram,0x02b5fc14) */
/* WARNING: Removing unreachable block (ram,0x02b5fc9c) */
/* WARNING: Removing unreachable block (ram,0x02b5fce4) */
/* WARNING: Removing unreachable block (ram,0x02b5fd24) */
/* WARNING: Removing unreachable block (ram,0x02b5fd94) */
/* WARNING: Removing unreachable block (ram,0x02b5fdd4) */
/* WARNING: Removing unreachable block (ram,0x02b5fe14) */
/* WARNING: Removing unreachable block (ram,0x02b5fe84) */
/* WARNING: Removing unreachable block (ram,0x02b5fec4) */
/* WARNING: Removing unreachable block (ram,0x02b5ff04) */
/* WARNING: Removing unreachable block (ram,0x02b5ff74) */
/* WARNING: Removing unreachable block (ram,0x02b5ffb4) */
/* WARNING: Removing unreachable block (ram,0x02b5fff4) */
/* WARNING: Removing unreachable block (ram,0x02b60064) */
/* WARNING: Removing unreachable block (ram,0x02b600a4) */

undefined8 FUN_02b5fbc0(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bc43f8;
  puVar2 = PTR_DAT_04bb27a8;
  uVar5 = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
      uVar6 = 0;
    }
    else {
      local_44 = 0;
      local_58 = PTR_DAT_04bc43f8 + 0x10;
      local_50 = DAT_05636e30;
      uVar4 = FUN_02a59140(puVar1,&local_58);
      uVar6 = 0;
      if ((uVar4 & 1) != 0) {
        uVar6 = 1;
        puVar1 = &DAT_05636dd8;
        if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
          puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
        }
        if (puVar1[1] != 0) {
          local_58 = puVar3 + 0x10;
          local_44 = 1;
          local_50 = DAT_05636e34;
          uVar4 = FUN_02a59140(puVar1,&local_58);
          if ((uVar4 & 1) != 0) {
            uVar6 = 2;
            puVar1 = &DAT_05636dd8;
            if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
              puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
            }
            if (puVar1[1] != 0) {
              local_58 = puVar3 + 0x10;
              local_44 = 2;
              local_50 = DAT_05636e38;
              uVar4 = FUN_02a59140(puVar1,&local_58);
              if ((uVar4 & 1) != 0) {
                uVar6 = 3;
                puVar1 = &DAT_05636dd8;
                if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
                  puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
                }
                if (puVar1[1] != 0) {
                  local_58 = puVar3 + 0x10;
                  local_44 = 3;
                  local_50 = DAT_05636e3c;
                  uVar4 = FUN_02a59140(puVar1,&local_58);
                  if ((uVar4 & 1) != 0) {
                    uVar6 = 4;
                    puVar1 = &DAT_05636dd8;
                    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
                      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
                    }
                    if (puVar1[1] != 0) {
                      local_58 = puVar3 + 0x10;
                      local_44 = 4;
                      local_50 = DAT_05636e40;
                      uVar4 = FUN_02a59140(puVar1,&local_58);
                      if ((uVar4 & 1) != 0) {
                        uVar6 = 5;
                        puVar1 = &DAT_05636dd8;
                        if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
                          puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
                        }
                        if (puVar1[1] != 0) {
                          local_58 = puVar3 + 0x10;
                          local_44 = 5;
                          local_50 = DAT_05636e44;
                          uVar4 = FUN_02a59140(puVar1,&local_58);
                          if ((uVar4 & 1) != 0) {
                            uVar6 = 6;
                            puVar1 = &DAT_05636dd8;
                            if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
                              puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
                            }
                            if (puVar1[1] != 0) {
                              local_58 = puVar3 + 0x10;
                              local_44 = 6;
                              local_50 = DAT_05636e48;
                              uVar4 = FUN_02a59140(puVar1,&local_58);
                              if ((uVar4 & 1) != 0) {
                                uVar6 = 7;
                                puVar1 = &DAT_05636dd8;
                                if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
                                  puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148)
                                  ;
                                }
                                if (puVar1[1] != 0) {
                                  local_58 = puVar3 + 0x10;
                                  local_44 = 7;
                                  local_50 = DAT_05636e4c;
                                  uVar4 = FUN_02a59140(puVar1,&local_58);
                                  if ((uVar4 & 1) != 0) {
                                    uVar6 = 8;
                                    puVar1 = &DAT_05636dd8;
                                    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
                                      puVar1 = (undefined8 *)
                                               (*(long *)(*(long *)puVar2 + 0x38) + 0x148);
                                    }
                                    if (puVar1[1] != 0) {
                                      local_58 = puVar3 + 0x10;
                                      local_44 = 8;
                                      local_50 = DAT_05636e50;
                                      uVar4 = FUN_02a59140(puVar1,&local_58);
                                      if ((uVar4 & 1) != 0) {
                                        uVar6 = 9;
                                        puVar1 = &DAT_05636dd8;
                                        if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
                                          puVar1 = (undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0x38) + 0x148);
                                        }
                                        if (puVar1[1] != 0) {
                                          local_58 = puVar3 + 0x10;
                                          local_44 = 9;
                                          local_50 = DAT_05636e54;
                                          uVar4 = FUN_02a59140(puVar1,&local_58);
                                          if ((uVar4 & 1) != 0) {
                                            return 0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *param_1 = uVar6;
    uVar5 = 1;
  }
  return uVar5;
}

